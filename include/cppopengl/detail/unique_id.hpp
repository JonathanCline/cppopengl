#pragma once
#ifndef CPPOPENGL_DETAIL_UNIQUE_ID_HPP
#define CPPOPENGL_DETAIL_UNIQUE_ID_HPP

/** @file */

#include <cppopengl/context.hpp>
#include <cppopengl/detail/object_id.hpp>

namespace gl
{
	namespace detail
	{
		template <typename RepT, typename TagT, typename DeleterT>
		struct basic_unique_id : public TagT
		{
		private:

			/**
			 * @brief Calls reset of the API is global, or checks that the ID has been reset.
			*/
			void reset_or_check()
			{
#if CPPOPENGL_GLOBAL_API_V
				// Call reset as API is global.
				this->reset();
#else
				// Ensure reset() was called.
				if (this->good())
				{
					_CPPOPENGL_ERROR("unique_id was not reset()!");
				};
#endif
			};

		public:

			using rep = RepT;
			using tag_type = TagT; 
			using id_type = detail::basic_object_id<rep, tag_type>;
			using deleter_type = DeleterT;

			constexpr deleter_type get_deleter() const
			{
				return deleter_type{};
			};

			constexpr const id_type& id() const noexcept
			{
				return this->id_;
			};
			constexpr rep get() const noexcept
			{
				return this->id().get();
			};

			constexpr bool good() const noexcept
			{
				return static_cast<bool>(this->id());
			};
			constexpr explicit operator bool() const noexcept
			{
				return this->good();
			};

			constexpr void reset(const context& ctx) noexcept
			{
				if (this->good())
				{
					auto _deleter = this->get_deleter();
					_deleter(ctx, this->id());
					this->id_.release();
				};
			};

#if CPPOPENGL_GLOBAL_API_V
			/**
			 * @copydoc gl::detail::basic_unique_id::reset()
			*/
			constexpr void reset() noexcept
			{
				return this->reset(global_context());
			};
#endif

			constexpr rep raw_release() noexcept
			{
				auto o = this->get();
				this->id_.release();
				return o;
			};

			constexpr id_type release() noexcept
			{
				auto o = this->id();
				this->id_.release();
				return o;
			};

			constexpr bool operator==(const basic_unique_id& rhs) const noexcept = default;
			constexpr bool operator!=(const basic_unique_id& rhs) const noexcept = default;

			friend inline constexpr bool operator==(const basic_unique_id& lhs, const id_type& rhs) noexcept
			{
				return lhs.id() == rhs;
			};
			friend inline constexpr bool operator==(const id_type& lhs, const basic_unique_id& rhs) noexcept
			{
				return lhs == rhs.id();
			};
			friend inline constexpr bool operator!=(const basic_unique_id& lhs, const id_type& rhs) noexcept
			{
				return lhs.id() != rhs;
			};
			friend inline constexpr bool operator!=(const id_type& lhs, const basic_unique_id& rhs) noexcept
			{
				return lhs != rhs.id();
			};

			friend inline constexpr bool operator==(const basic_unique_id& lhs, const null_id_t& rhs) noexcept
			{
				return lhs.id() == rhs;
			};
			friend inline constexpr bool operator==(const null_id_t& lhs, const basic_unique_id& rhs) noexcept
			{
				return lhs == rhs.id();
			};
			friend inline constexpr bool operator!=(const basic_unique_id& lhs, const null_id_t& rhs) noexcept
			{
				return lhs.id() != rhs;
			};
			friend inline constexpr bool operator!=(const null_id_t& lhs, const basic_unique_id& rhs) noexcept
			{
				return lhs != rhs.id();
			};


			constexpr basic_unique_id() noexcept :
				id_{}
			{};

			/**
			 * @brief Constructs a null unique_id. This is equivalent to the default constructor.
			 * @param nt Null id value
			*/
			constexpr basic_unique_id(null_id_t nt) noexcept :
				id_{}
			{};

#if CPPOPENGL_GLOBAL_API_V
			constexpr basic_unique_id& operator=(null_id_t nt) noexcept
			{
				this->reset();
			};
#endif

			constexpr explicit basic_unique_id(id_type _id) noexcept :
				id_(_id)
			{};
			constexpr explicit basic_unique_id(rep _id) noexcept :
				id_(_id)
			{};

			constexpr basic_unique_id(basic_unique_id&& other) noexcept :
				id_(other.release())
			{};
			constexpr basic_unique_id& operator=(basic_unique_id&& other) noexcept
			{
				this->reset_or_check();
				this->id_ = id_type(other.release());
				return *this;
			};

			~basic_unique_id() 
			{
				this->reset_or_check();
			};

		private:
			id_type id_;
	
			basic_unique_id(const basic_unique_id&) = delete;
			basic_unique_id& operator=(const basic_unique_id&) = delete;
		};
	};
};

#endif // CPPOPENGL_DETAIL_UNIQUE_ID_HPP