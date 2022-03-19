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
			> : public TagT
		{
		public:

			using rep = GLuint;
			using tag_type = TagT;

			constexpr explicit operator bool() const noexcept
			{
				return this->id_ != 0;
			};

			constexpr rep get() const noexcept
			{
				return this->id_;
			};
			constexpr rep release() noexcept
			{
				rep o = this->get();
				this->id_ = 0;
				return o;
			};

			constexpr basic_object_id() noexcept = default;
			constexpr explicit basic_object_id(rep _value) noexcept :
				id_(_value),
				TagT()
			{};

			constexpr basic_object_id(const basic_object_id& other) noexcept = default;
			constexpr basic_object_id& operator=(const basic_object_id& other) noexcept = default;

			constexpr basic_object_id(basic_object_id&& other) noexcept = default;
			constexpr basic_object_id& operator=(basic_object_id&& other) noexcept = default;

		private:

			rep id_ = 0;

		};
	};
};

#endif // CPPOPENGL_DETAIL_OBJECT_ID_HPP