
// Copyright Aleksey Gurtovoy 2000-2004
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//

// Preprocessed version of "boost/mpl/vector_c.hpp" header
// -- DO NOT modify by hand!

namespace boost { namespace mpl {

namespace aux {
template< nttp_int N >
struct vector_c_chooser;

}

namespace aux {

template<>
struct vector_c_chooser<0>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector0_c<
              T
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<1>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector1_c<
              T, C0
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<2>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector2_c<
              T, C0, C1
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<3>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector3_c<
              T, C0, C1, C2
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<4>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector4_c<
              T, C0, C1, C2, C3
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<5>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector5_c<
              T, C0, C1, C2, C3, C4
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<6>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector6_c<
              T, C0, C1, C2, C3, C4, C5
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<7>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector7_c<
              T, C0, C1, C2, C3, C4, C5, C6
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<8>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector8_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<9>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector9_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<10>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector10_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<11>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector11_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<12>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector12_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<13>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector13_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<14>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector14_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<15>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector15_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<16>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector16_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<17>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector17_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<18>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector18_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<19>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector19_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18
            > type;
    };
};

} // namespace aux

namespace aux {

template<>
struct vector_c_chooser<20>
{
    template<
          typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
        , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
        , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12
        , nttp_long C13, nttp_long C14, nttp_long C15, nttp_long C16
        , nttp_long C17, nttp_long C18, nttp_long C19
        >
    struct result_
    {
        typedef vector20_c<
              T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19
            > type;
    };
};

} // namespace aux

namespace aux {

template< nttp_long C >
struct is_vector_c_arg
{
    enum { value = true };
};

template<>
struct is_vector_c_arg<LONG_MAX>
{
    enum { value = false };
};

template<
      nttp_long C1, nttp_long C2, nttp_long C3, nttp_long C4, nttp_long C5
    , nttp_long C6, nttp_long C7, nttp_long C8, nttp_long C9, nttp_long C10
    , nttp_long C11, nttp_long C12, nttp_long C13, nttp_long C14, nttp_long C15
    , nttp_long C16, nttp_long C17, nttp_long C18, nttp_long C19, nttp_long C20
    >
struct vector_c_count_args
{
    enum { value =
          is_vector_c_arg<C1>::value + is_vector_c_arg<C2>::value 
        + is_vector_c_arg<C3>::value + is_vector_c_arg<C4>::value 
        + is_vector_c_arg<C5>::value + is_vector_c_arg<C6>::value 
        + is_vector_c_arg<C7>::value + is_vector_c_arg<C8>::value 
        + is_vector_c_arg<C9>::value + is_vector_c_arg<C10>::value 
        + is_vector_c_arg<C11>::value + is_vector_c_arg<C12>::value 
        + is_vector_c_arg<C13>::value + is_vector_c_arg<C14>::value 
        + is_vector_c_arg<C15>::value + is_vector_c_arg<C16>::value 
        + is_vector_c_arg<C17>::value + is_vector_c_arg<C18>::value 
        + is_vector_c_arg<C19>::value + is_vector_c_arg<C20>::value
        };

};

template<
      typename T, nttp_long C0, nttp_long C1, nttp_long C2, nttp_long C3
    , nttp_long C4, nttp_long C5, nttp_long C6, nttp_long C7, nttp_long C8
    , nttp_long C9, nttp_long C10, nttp_long C11, nttp_long C12, nttp_long C13
    , nttp_long C14, nttp_long C15, nttp_long C16, nttp_long C17, nttp_long C18
    , nttp_long C19
    >
struct vector_c_impl
{
    typedef aux::vector_c_count_args<
          C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19
        > arg_num_;

    typedef typename aux::vector_c_chooser< arg_num_::value >
        ::template result_< T,C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,C17,C18,C19 >::type type;
};

} // namespace aux

template<
      typename T, nttp_long C0 = LONG_MAX, nttp_long C1 = LONG_MAX
    , nttp_long C2 = LONG_MAX, nttp_long C3 = LONG_MAX, nttp_long C4 = LONG_MAX
    , nttp_long C5 = LONG_MAX, nttp_long C6 = LONG_MAX, nttp_long C7 = LONG_MAX
    , nttp_long C8 = LONG_MAX, nttp_long C9 = LONG_MAX
    , nttp_long C10 = LONG_MAX, nttp_long C11 = LONG_MAX
    , nttp_long C12 = LONG_MAX, nttp_long C13 = LONG_MAX
    , nttp_long C14 = LONG_MAX, nttp_long C15 = LONG_MAX
    , nttp_long C16 = LONG_MAX, nttp_long C17 = LONG_MAX
    , nttp_long C18 = LONG_MAX, nttp_long C19 = LONG_MAX
    >
struct vector_c
    : aux::vector_c_impl<
          T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19
        >::type
{
    typedef typename aux::vector_c_impl<
          T, C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19
        >::type type;
};

}}

