#ifndef BOOST_GEOMETRY_PROJECTIONS_PUTP4P_HPP
#define BOOST_GEOMETRY_PROJECTIONS_PUTP4P_HPP

// Boost.Geometry - extensions-gis-projections (based on PROJ4)
// This file is automatically generated. DO NOT EDIT.

// Copyright (c) 2008-2012 Barend Gehrels, Amsterdam, the Netherlands.

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// This file is converted from PROJ4, http://trac.osgeo.org/proj
// PROJ4 is originally written by Gerald Evenden (then of the USGS)
// PROJ4 is maintained by Frank Warmerdam
// PROJ4 is converted to Boost.Geometry by Barend Gehrels

// Original copyright notice:
 
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#include <boost/concept_check.hpp>
#include <boost/math/special_functions/hypot.hpp>

#include <boost/geometry/extensions/gis/projections/impl/base_static.hpp>
#include <boost/geometry/extensions/gis/projections/impl/base_dynamic.hpp>
#include <boost/geometry/extensions/gis/projections/impl/projects.hpp>
#include <boost/geometry/extensions/gis/projections/impl/factory_entry.hpp>

namespace boost { namespace geometry { namespace projections
{
    #ifndef DOXYGEN_NO_DETAIL
    namespace detail { namespace putp4p{ 

            struct par_putp4p
            {
                double    C_x, C_y;
            };

            // template class, using CRTP to implement forward/inverse
            template <typename Geographic, typename Cartesian, typename Parameters>
            struct base_putp4p_spheroid : public base_t_fi<base_putp4p_spheroid<Geographic, Cartesian, Parameters>,
                     Geographic, Cartesian, Parameters>
            {

                 typedef double geographic_type;
                 typedef double cartesian_type;

                par_putp4p m_proj_parm;

                inline base_putp4p_spheroid(const Parameters& par)
                    : base_t_fi<base_putp4p_spheroid<Geographic, Cartesian, Parameters>,
                     Geographic, Cartesian, Parameters>(*this, par) {}

                inline void fwd(geographic_type& lp_lon, geographic_type& lp_lat, cartesian_type& xy_x, cartesian_type& xy_y) const
                {
                    lp_lat = aasin(0.883883476 * sin(lp_lat));
                    xy_x = this->m_proj_parm.C_x * lp_lon * cos(lp_lat);
                    xy_x /= cos(lp_lat *= 0.333333333333333);
                    xy_y = this->m_proj_parm.C_y * sin(lp_lat);
                }

                inline void inv(cartesian_type& xy_x, cartesian_type& xy_y, geographic_type& lp_lon, geographic_type& lp_lat) const
                {
                    lp_lat = aasin(xy_y / this->m_proj_parm.C_y);
                    lp_lon = xy_x * cos(lp_lat) / this->m_proj_parm.C_x;
                    lp_lat *= 3.;
                    lp_lon /= cos(lp_lat);
                    lp_lat = aasin(1.13137085 * sin(lp_lat));
                }
            };

            template <typename Parameters>
            void setup(Parameters& par, par_putp4p& proj_parm) 
            {
                boost::ignore_unused_variable_warning(par);
                boost::ignore_unused_variable_warning(proj_parm);
                par.es = 0.;
                // par.inv = s_inverse;
                // par.fwd = s_forward;
            }


            // Putnins P4'
            template <typename Parameters>
            void setup_putp4p(Parameters& par, par_putp4p& proj_parm)
            {
                proj_parm.C_x = 0.874038744;
                proj_parm.C_y = 3.883251825;
                setup(par, proj_parm);
            }

            // Werenskiold I
            template <typename Parameters>
            void setup_weren(Parameters& par, par_putp4p& proj_parm)
            {
                proj_parm.C_x = 1.;
                proj_parm.C_y = 4.442882938;
                setup(par, proj_parm);
            }

        }} // namespace detail::putp4p
    #endif // doxygen 

    /*!
        \brief Putnins P4' projection
        \ingroup projections
        \tparam Geographic latlong point type
        \tparam Cartesian xy point type
        \tparam Parameters parameter type
        \par Projection characteristics
         - Pseudocylindrical
         - Spheroid
        \par Example
        \image html ex_putp4p.gif
    */
    template <typename Geographic, typename Cartesian, typename Parameters = parameters>
    struct putp4p_spheroid : public detail::putp4p::base_putp4p_spheroid<Geographic, Cartesian, Parameters>
    {
        inline putp4p_spheroid(const Parameters& par) : detail::putp4p::base_putp4p_spheroid<Geographic, Cartesian, Parameters>(par)
        {
            detail::putp4p::setup_putp4p(this->m_par, this->m_proj_parm);
        }
    };

    /*!
        \brief Werenskiold I projection
        \ingroup projections
        \tparam Geographic latlong point type
        \tparam Cartesian xy point type
        \tparam Parameters parameter type
        \par Projection characteristics
         - Pseudocylindrical
         - Spheroid
        \par Example
        \image html ex_weren.gif
    */
    template <typename Geographic, typename Cartesian, typename Parameters = parameters>
    struct weren_spheroid : public detail::putp4p::base_putp4p_spheroid<Geographic, Cartesian, Parameters>
    {
        inline weren_spheroid(const Parameters& par) : detail::putp4p::base_putp4p_spheroid<Geographic, Cartesian, Parameters>(par)
        {
            detail::putp4p::setup_weren(this->m_par, this->m_proj_parm);
        }
    };

    #ifndef DOXYGEN_NO_DETAIL
    namespace detail
    {

        // Factory entry(s)
        template <typename Geographic, typename Cartesian, typename Parameters>
        class putp4p_entry : public detail::factory_entry<Geographic, Cartesian, Parameters>
        {
            public :
                virtual projection<Geographic, Cartesian>* create_new(const Parameters& par) const
                {
                    return new base_v_fi<putp4p_spheroid<Geographic, Cartesian, Parameters>, Geographic, Cartesian, Parameters>(par);
                }
        };

        template <typename Geographic, typename Cartesian, typename Parameters>
        class weren_entry : public detail::factory_entry<Geographic, Cartesian, Parameters>
        {
            public :
                virtual projection<Geographic, Cartesian>* create_new(const Parameters& par) const
                {
                    return new base_v_fi<weren_spheroid<Geographic, Cartesian, Parameters>, Geographic, Cartesian, Parameters>(par);
                }
        };

        template <typename Geographic, typename Cartesian, typename Parameters>
        inline void putp4p_init(detail::base_factory<Geographic, Cartesian, Parameters>& factory)
        {
            factory.add_to_factory("putp4p", new putp4p_entry<Geographic, Cartesian, Parameters>);
            factory.add_to_factory("weren", new weren_entry<Geographic, Cartesian, Parameters>);
        }

    } // namespace detail 
    #endif // doxygen

}}} // namespace boost::geometry::projections

#endif // BOOST_GEOMETRY_PROJECTIONS_PUTP4P_HPP

