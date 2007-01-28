/*=============================================================================
    Copyright (c) 2001-2006 Joel de Guzman

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(BOOST_FUSION_TRANSFORM_VIEW_ITERATOR_20070127_0957)
#define BOOST_FUSION_TRANSFORM_VIEW_ITERATOR_20070127_0957

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion {

    struct transform_view_iterator_tag;

    namespace extension
    {
        template<typename Tag>
        struct equal_to_impl;

        template<>
        struct equal_to_impl<transform_view_iterator_tag>
        {
            template<typename It1, typename It2>
            struct apply
                : result_of::equal_to<typename It1::first_type, typename It2::first_type>
            {};
        };
    }
}}

#endif
