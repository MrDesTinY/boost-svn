
#ifndef BOOST_MPL_ZIP_VIEW_HPP_INCLUDED
#define BOOST_MPL_ZIP_VIEW_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2002
// Copyright David Abrahams 2000-2002
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/transform.hpp>
#include <boost/mpl/begin_end.hpp>
#include <boost/mpl/iterator_tag.hpp>
#include <boost/mpl/next.hpp>
#include <boost/mpl/lambda.hpp>
#include <boost/mpl/apply.hpp>
#include <boost/mpl/aux_/na_spec.hpp>

namespace boost { namespace mpl {

template< typename IteratorSeq >
struct zip_iterator
{
    typedef forward_iterator_tag category;
    typedef typename transform<
          IteratorSeq
        , apply0<_1>
        >::type type;

    typedef zip_iterator<
          typename transform<
                IteratorSeq
              , next<_1>
            >::type
        > next;
};

template<
      typename BOOST_MPL_AUX_NA_PARAM(Sequences)
    >
struct zip_view
{
 private:    
    typedef typename transform< Sequences, begin<_1> >::type first_ones_;
    typedef typename transform< Sequences, end<_1> >::type last_ones_;
    
 public:
    typedef nested_begin_end_tag tag;
    typedef zip_iterator<first_ones_> begin;
    typedef zip_iterator<last_ones_> end;
};

BOOST_MPL_AUX_NA_SPEC(1, zip_view)

}} // namespace boost::mpl

#endif // BOOST_MPL_ZIP_VIEW_HPP_INCLUDED
