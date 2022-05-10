#pragma once
#ifndef CPPOPENGL_DETAIL_OBJECT_ID_HPP
#define CPPOPENGL_DETAIL_OBJECT_ID_HPP

/** @file */

#include <cppopengl/detail/gl.hpp>
#include <cppopengl/detail/utility.hpp>
#include <cppopengl/detail/type_traits.hpp>

namespace gl
{
	namespace detail
	{
		/**
		 * @brief Integer invariant class template.
		 *
		 * @tparam RepT Type to use for the underlying value representation.
		 * @tparam TagT Tag type to create unique typenames and is inherited from to allow injection of APIs.
		 * @tparam _Detail_Enable SFINAE specialization point, this is used for type constraining and SHOULD NOT BE RELIED ON.
		*/
		template <typename RepT, typename TagT, typename _Detail_Enable = void>
		struct integer_invariant;

		/**
		 * @brief Integer invariant class template.
		 *
		 * @tparam RepT Type to use for the underlying ID value representation.
		 * @tparam TagT Tag type to create unique typenames and is inherited from to allow injection of APIs.
		*/
		template <typename RepT, typename TagT> _CPPOPENGL_TCON_REQUIRES(detail::cx_value<TagT> && !std::same_as<TagT, void>)
		struct integer_invariant<RepT, TagT,
			_CPPOPENGL_TCON_ENABLE_IF_T(void, detail::is_value_type<TagT>::value && !std::is_same<TagT, void>::value)
		> : public TagT
		{
		public:

			using rep = RepT;
			using tag_type = TagT;

			constexpr explicit operator bool() const noexcept
			{
				return this->value_ != 0;
			};

			constexpr rep get() const noexcept
			{
				return this->value_;
			};
			
			constexpr integer_invariant() noexcept = default;
			constexpr explicit integer_invariant(rep _value) noexcept :
				value_(_value),
				TagT()
			{};

			constexpr integer_invariant(const integer_invariant& other) noexcept = default;
			constexpr integer_invariant& operator=(const integer_invariant& other) noexcept = default;

			constexpr integer_invariant(integer_invariant&& other) noexcept = default;
			constexpr integer_invariant& operator=(integer_invariant&& other) noexcept = default;

		private:

			rep value_ = 0;
		};
	};

	namespace detail
	{
		/**
		 * @brief Integer invariant template for creating object ID invariants.
		 * 
		 * @tparam RepT Type to use for the underlying ID value representation. 
		 * @tparam TagT Tag type to create unique typenames and is inherited from to allow injection of APIs.
		 * @tparam _Detail_Enable SFINAE specialization point, this is used for type constraining and SHOULD NOT BE RELIED ON.
		*/
		template <typename RepT, typename TagT, typename _Detail_Enable = void>
		struct basic_object_id;

		/**
		 * @brief Integer invariant template for creating object ID invariants.
		 * 
		 * @tparam RepT Type to use for the underlying ID value representation.
		 * @tparam TagT Tag type to create unique typenames and is inherited from to allow injection of APIs.
		*/
		template <typename RepT, typename TagT> _CPPOPENGL_TCON_REQUIRES(detail::cx_value<TagT> && !std::same_as<TagT, void>)
		struct basic_object_id<RepT, TagT,
			_CPPOPENGL_TCON_ENABLE_IF_T(void, detail::is_value_type<TagT>::value && !std::is_same<TagT, void>::value)
			> : public integer_invariant<RepT, TagT>
		{
		private:
			using parent_type = integer_invariant<RepT, TagT>;
			using this_type = basic_object_id<RepT, TagT>;
		public:

			using rep = RepT;
			using tag_type = TagT;

			constexpr rep release() noexcept
			{
				rep o = this->get();
				*this = basic_object_id(0);
				return o;
			};
			
			friend constexpr inline bool operator==(const this_type& lhs, const this_type& rhs)
			{
				return lhs.get() == rhs.get();
			};
			friend constexpr inline bool operator!=(const this_type& lhs, const this_type& rhs)
			{
				return lhs.get() != rhs.get();
			};

			using parent_type::parent_type;
		};
	};
};

#endif // CPPOPENGL_DETAIL_OBJECT_ID_HPP