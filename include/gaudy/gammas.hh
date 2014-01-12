// (C) 2013 Sebastian Mach (1983), this file is published under the terms of the
// GNU General Public License, Version 3 (a.k.a. GPLv3).
// See COPYING in the root-folder of the excygen project folder.
#ifndef GAMMAS_HH_INCLUDED_20131231
#define GAMMAS_HH_INCLUDED_20131231

#include <cmath>

namespace gaudy { namespace gamma { namespace detail {

    struct simple_gamma {
        double gamma;
        constexpr simple_gamma (double gamma) noexcept : gamma(gamma) {}

        constexpr double to_linear (double v) noexcept {
            using std::pow; using std::fabs;
            return (v<0?-1:1) * pow(fabs(v), gamma);
        }

        constexpr double to_nonlinear (double v) noexcept {
            using std::pow; using std::fabs;
            return (v<0?-1:1) * pow(fabs(v), 1./gamma);
        }
    };

    // see also * http://www.w3.org/Graphics/Color/sRGB.html
    //          * http://en.wikipedia.org/wiki/SRGB
    struct sRGB {

        constexpr double to_linear (double v) noexcept {
            using std::fabs;
            return (v<0?-1:1) * to_linear_impl(fabs(v));
        }

        constexpr double to_nonlinear (double v) noexcept {
            using std::fabs;
            return (v<0?-1:1) * to_nonlinear_impl(fabs(v));
        }

    private:
        constexpr double to_linear_impl (double v) noexcept {
            using std::pow;
            return (v<=0.04045) ? (v/12.92)
                                : pow((v+0.055)/1.055, 2.4);
        }

        constexpr double to_nonlinear_impl (double v) noexcept {
            using std::pow;
            return (v<=0.0031308) ? (v*12.92)
                                  : 1.055*pow(v, 1/2.4) - 0.055;
        }
    };

    // see also * http://www.brucelindbloom.com/
    struct L {

        constexpr double to_linear (double v) noexcept {
            using std::fabs;
            return (v<0?-1:1) * to_linear_impl(fabs(v));
        }

        constexpr double to_nonlinear (double v) noexcept {
            using std::fabs;
            return (v<0?-1:1) * to_nonlinear_impl(fabs(v));
        }

    private:
        constexpr double to_linear_impl (double v) noexcept {
            using std::pow;
            return (v<=0.08) ? (100*v/903.3) // using actual CIE standard
                             : pow((v+0.16)/1.16, 3.0);
        }

        constexpr double to_nonlinear_impl (double v) noexcept {
            using std::pow;
            return (v<=0.008856) ? (v*9.033)
                                 : 1.16*pow(v, 1/3.0) - 0.16;
        }
    };

} } }


namespace gaudy { namespace gamma {

    static constexpr auto _1_0 = detail::simple_gamma(1.0);
    static constexpr auto _1_8 = detail::simple_gamma(1.8);
    static constexpr auto _2_2 = detail::simple_gamma(2.2);
    static constexpr auto sRGB = detail::sRGB();
    static constexpr auto L    = detail::L();

} }

#endif // GAMMAS_HH_INCLUDED_20131231
