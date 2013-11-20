// (C) 2013 Sebastian Mach (1983), this file is published under the terms of the
// GNU General Public License, Version 3 (a.k.a. GPLv3).
// See COPYING in the root-folder of the excygen project folder.
#ifndef CMATH_HH_INCLUDED_20131102
#define CMATH_HH_INCLUDED_20131102

#include <cmath>
#include <utility>
#include "RGB.hh" // TODO: remove once generified

namespace gaudy {

    namespace find_cmath {
      /*using std::cos; template <typename T> using cos_type = decltype(cos(std::declval<T>()));
      using std::sin; template <typename T> using sin_type = decltype(sin(std::declval<T>()));
      using std::tan; template <typename T> using tan_type = decltype(tan(std::declval<T>()));*/

      using std::ilogb; template <typename T> using ilogb_type = decltype(ilogb(std::declval<T>()));
    }

    // -- trigonometric ----------------------------------------------------------------------------
    template <typename T> basic_rgb<T>  cos (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>  sin (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>  tan (basic_rgb<T> v) noexcept ;

    template <typename T> basic_rgb<T> acos (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> asin (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> atan (basic_rgb<T> v) noexcept ;

    template <typename T> basic_rgb<T> atan2 (basic_rgb<T> v, basic_rgb<T> w) noexcept ;
    template <typename T> basic_rgb<T> atan2 (basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept ;
    template <typename T> basic_rgb<T> atan2 (typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept ;

    // -- hyperbolic -------------------------------------------------------------------------------
    template <typename T> basic_rgb<T>  cosh (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>  sinh (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>  tanh (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> acosh (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> asinh (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> atanh (basic_rgb<T> v) noexcept ;

    // -- exponential and logarithmic --------------------------------------------------------------
    template <typename T> basic_rgb<T> exp   (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> frexp (basic_rgb<T> v, basic_rgb<int> *exp)   noexcept ;
    template <typename T> basic_rgb<T> ldexp (basic_rgb<T> sig, basic_rgb<int> exp)  noexcept ;
    template <typename T> basic_rgb<T> log   (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> log10 (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> modf  (basic_rgb<T> v, basic_rgb<T> *intpart)  noexcept ;
    template <typename T> basic_rgb<T> exp2  (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> expm1 (basic_rgb<T> v) noexcept ;

    template <typename T> basic_rgb<find_cmath::ilogb_type<T>> ilogb (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>   log1p (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>   log2  (basic_rgb<T> v) noexcept ;

    template <typename T> basic_rgb<T> scalbn  (basic_rgb<T> v, basic_rgb<int> n) noexcept ;
    template <typename T> basic_rgb<T> scalbn  (basic_rgb<T> v, int n) noexcept ;
    template <typename T> basic_rgb<T> scalbln (basic_rgb<T> v, basic_rgb<long> n) noexcept ;
    template <typename T> basic_rgb<T> scalbln (basic_rgb<T> v, long n) noexcept ;


    // -- power ------------------------------------------------------------------------------------
    template <typename T> basic_rgb<T> pow (basic_rgb<T> v, basic_rgb<T> w) noexcept ;
    template <typename T> basic_rgb<T> pow (basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept ;
    template <typename T> basic_rgb<T> pow (typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept ;

    template <typename T> basic_rgb<T> sqrt (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> cbrt (basic_rgb<T> v) noexcept ;

    template <typename T> basic_rgb<T> hypot (basic_rgb<T> v, basic_rgb<T> w) noexcept ;
    template <typename T> basic_rgb<T> hypot (basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept ;
    template <typename T> basic_rgb<T> hypot (typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept ;

    // -- error and gamma --------------------------------------------------------------------------
    template <typename T> basic_rgb<T> erf    (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> erfc   (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> lgamma (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> tgamma (basic_rgb<T> v) noexcept ;

    // -- rounding and remainder -------------------------------------------------------------------
    template <typename T> basic_rgb<T>         ceil      (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         floor     (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         fmod      (basic_rgb<T> num, basic_rgb<T> den) noexcept ;
    template <typename T> basic_rgb<T>         fmod      (basic_rgb<T> num, typename basic_rgb<T>::value_type den) noexcept ;
    template <typename T> basic_rgb<T>         fmod      (typename basic_rgb<T>::value_type num, basic_rgb<T> den) noexcept ;
    template <typename T> basic_rgb<T>         trunc     (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         round     (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<long>      lround    (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<long long> llround   (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         rint      (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<long>      lrint     (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<long long> llrint    (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         nearbyint (basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T>         remainder (basic_rgb<T> num, basic_rgb<T> denom) noexcept ;
    template <typename T> basic_rgb<T>         remainder (basic_rgb<T> num, typename basic_rgb<T>::value_type denom) noexcept ;
    template <typename T> basic_rgb<T>         remainder (typename basic_rgb<T>::value_type num, basic_rgb<T> denom) noexcept ;
    template <typename T> basic_rgb<T> remquo (basic_rgb<T> num, basic_rgb<T> den, basic_rgb<int> *quot) noexcept ;
    template <typename T> basic_rgb<T> remquo (basic_rgb<T> num, typename basic_rgb<T>::value_type den, basic_rgb<int> *quot) noexcept ;
    template <typename T> basic_rgb<T> remquo (typename basic_rgb<T>::value_type num, basic_rgb<T> den, basic_rgb<int> *quot) noexcept ;

    // -- floating point manipulation --------------------------------------------------------------
    template <typename T> basic_rgb<T> copysign  (basic_rgb<T> x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> nextafter (basic_rgb<T> x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> nexttoward(basic_rgb<T> x, basic_rgb<long double> y) noexcept ;

    template <typename T> basic_rgb<T> copysign  (basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept ;
    template <typename T> basic_rgb<T> nextafter (basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept ;
    template <typename T> basic_rgb<T> nexttoward(basic_rgb<T> x, long double y) noexcept ;

    template <typename T> basic_rgb<T> copysign  (typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> nextafter (typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> nexttoward(T x,                                 basic_rgb<long double> y) noexcept ;
    // NAN macro constant not implemented, because we would need to be able to overload macros.

    // -- min, max, difference ---------------------------------------------------------------------
    template <typename T> basic_rgb<T> fmin(basic_rgb<T> x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> fmax(basic_rgb<T> x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> fdim(basic_rgb<T> x, basic_rgb<T> y) noexcept ;

    template <typename T> basic_rgb<T> fmin(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept ;
    template <typename T> basic_rgb<T> fmax(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept ;
    template <typename T> basic_rgb<T> fdim(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept ;

    template <typename T> basic_rgb<T> fmin(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> fmax(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept ;
    template <typename T> basic_rgb<T> fdim(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept ;

    // -- other ------------------------------------------------------------------------------------
    template <typename T> basic_rgb<T> fabs(basic_rgb<T> v) noexcept ;
    template <typename T> basic_rgb<T> abs (basic_rgb<T> v) noexcept;

    // fma comes in many overloads:
    //   fma (RGB,    RGB,    RGB   )
    //   fma (RGB,    RGB,    Scalar)
    //   fma (RGB,    Scalar, RGB   )
    //   fma (RGB,    Scalar, Scalar)
    //   fma (Scalar, RGB,    RGB   )
    //   fma (Scalar, RGB,    Scalar)
    //   fma (Scalar, Scalar, RGB   )
    //   fma (Scalar, Scalar, Scalar) <-- this is given by cmath
    template <typename T> basic_rgb<T> fma (basic_rgb<T> x, basic_rgb<T> y, basic_rgb<T> z) noexcept ;
    template <typename T> basic_rgb<T> fma (basic_rgb<T> x, basic_rgb<T> y, typename basic_rgb<T>::value_type z) noexcept ;
    template <typename T> basic_rgb<T> fma (basic_rgb<T> x, typename basic_rgb<T>::value_type y, basic_rgb<T> z) noexcept ;
    template <typename T> basic_rgb<T> fma (basic_rgb<T> x, typename basic_rgb<T>::value_type y, typename basic_rgb<T>::value_type z) noexcept ;
    template <typename T> basic_rgb<T> fma (typename basic_rgb<T>::value_type x, basic_rgb<T> y, basic_rgb<T> z) noexcept ;
    template <typename T> basic_rgb<T> fma (typename basic_rgb<T>::value_type x, basic_rgb<T> y, typename basic_rgb<T>::value_type z) noexcept ;
    template <typename T> basic_rgb<T> fma (typename basic_rgb<T>::value_type x, typename basic_rgb<T>::value_type y, basic_rgb<T> z) noexcept ;

    // -- classification functions -----------------------------------------------------------------

    // -- comparison functions ---------------------------------------------------------------------

}



namespace gaudy {
    // -- <cmath> ---------------------------------------------------------------------------------
    // DONE: replace all std-qualifcations by a using
    // TODO: for some functions, add permutations of RGB, Scalar operands
    //-- -- -- -- --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  -- --
    // Info: While glibcxx defines some (many? (all?)) cmath functions as constexpr, this is not
    //       sanctioned  by  the  C++11  standard,  therefore we are not making the  promise  of
    //       constexpr, as such code is non-portable.
    //-- -- -- -- --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  -- --

    // trigonometric
    template <typename T>
    inline basic_rgb<T> cos(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::cos; return cos(f);});
    }

    template <typename T>
    inline basic_rgb<T> sin(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::sin; return sin(f);});
    }

    template <typename T>
    inline basic_rgb<T> tan(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::tan; return tan(f);});
    }

    template <typename T>
    inline basic_rgb<T> acos(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::acos; return acos(f);});
    }

    template <typename T>
    inline basic_rgb<T> asin(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::asin; return asin(f);});
    }

    template <typename T>
    inline basic_rgb<T> atan(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::atan; return atan(f);});
    }

    template <typename T>
    inline basic_rgb<T> atan2(basic_rgb<T> v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::atan2; return atan2(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> atan2(basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept {
        return apply(v, w, [](T f, T g){using std::atan2; return atan2(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> atan2(typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::atan2; return atan2(f, g);});
    }

    // hyperbolic
    template <typename T>
    inline basic_rgb<T> cosh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::cosh; return cosh(f);});
    }

    template <typename T>
    inline basic_rgb<T> sinh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::sinh; return sinh(f);});
    }

    template <typename T>
    inline basic_rgb<T> tanh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::tanh; return tanh(f);});
    }

    template <typename T>
    inline basic_rgb<T> acosh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::acosh; return acosh(f);});
    }

    template <typename T>
    inline basic_rgb<T> asinh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::asinh; return asinh(f);});
    }

    template <typename T>
    inline basic_rgb<T> atanh(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::atanh; return atanh(f);});
    }

    // exponential and logarithmic
    template <typename T>
    inline basic_rgb<T> exp(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::exp; return exp(f);});
    }

    template <typename T>
    inline basic_rgb<T> frexp(basic_rgb<T> v, basic_rgb<int> *exp) noexcept {
        return apply(v, exp, [](T f, int *e){using std::frexp; return frexp(f, e);});
    }

    template <typename T>
    inline basic_rgb<T> ldexp(basic_rgb<T> sig, basic_rgb<int> exp) noexcept {
        return apply(sig, exp, [](T f, int e){using std::ldexp; return ldexp(f, e);});
    }

    template <typename T>
    inline basic_rgb<T> log(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::log; return log(f);});
    }

    template <typename T>
    inline basic_rgb<T> log10(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::log10; return log10(f);});
    }

    template <typename T>
    inline basic_rgb<T> modf(basic_rgb<T> v, basic_rgb<T> *intpart) noexcept {
        return apply(v, intpart, [](T f, T *e){using std::modf; return modf(f, e);});
    }

    template <typename T>
    inline basic_rgb<T> exp2(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::exp2; return exp2(f);});
    }

    template <typename T>
    inline basic_rgb<T> expm1(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::expm1; return expm1(f);});
    }

    template <typename T>
    inline basic_rgb<find_cmath::ilogb_type<T>> ilogb(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::ilogb; return ilogb(f);});
    }

    template <typename T>
    inline basic_rgb<T> log1p(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::log1p; return log1p(f);});
    }

    template <typename T>
    inline basic_rgb<T> log2(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::log2; return log2(f);});
    }


    template <typename T>
    inline basic_rgb<T> scalbn (basic_rgb<T> v, int n) noexcept {
        return apply(v, n, [](T f, int n){using std::scalbn; return scalbn(f, n);});
    }
    template <typename T>
    inline basic_rgb<T> scalbn (basic_rgb<T> v, basic_rgb<int> n) noexcept {
        return apply(v, n, [](T f, int n){using std::scalbn; return scalbn(f, n);});
    }


    template <typename T>
    inline basic_rgb<T> scalbln (basic_rgb<T> v, long n) noexcept {
        return apply(v, n, [](T f, long n){using std::scalbln; return scalbln(f, n);});
    }
    template <typename T>
    inline basic_rgb<T> scalbln (basic_rgb<T> v, basic_rgb<long> n) noexcept {
        return apply(v, n, [](T f, long n){using std::scalbln; return scalbln(f, n);});
    }


    // power
    template <typename T>
    inline basic_rgb<T> pow(basic_rgb<T> v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::pow; return pow(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> pow(basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept {
        return apply(v, w, [](T f, T g){using std::pow; return pow(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> pow(typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::pow; return pow(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> sqrt(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::sqrt; return sqrt(f);});
    }

    template <typename T>
    inline basic_rgb<T> cbrt(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::cbrt; return cbrt(f);});
    }

    template <typename T>
    inline basic_rgb<T> hypot(basic_rgb<T> v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::hypot; return hypot(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> hypot(basic_rgb<T> v, typename basic_rgb<T>::value_type w) noexcept {
        return apply(v, w, [](T f, T g){using std::hypot; return hypot(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> hypot(typename basic_rgb<T>::value_type v, basic_rgb<T> w) noexcept {
        return apply(v, w, [](T f, T g){using std::hypot; return hypot(f, g);});
    }

    // error and gamma
    template <typename T>
    inline basic_rgb<T> erf (basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::erf; return erf(f);});
    }
    template <typename T>
    inline basic_rgb<T> erfc(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::erfc; return erfc(f);});
    }
    template <typename T>
    inline basic_rgb<T> lgamma(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::lgamma; return lgamma(f);});
    }
    template <typename T>
    inline basic_rgb<T> tgamma(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::tgamma; return tgamma(f);});
    }


    // rounding and remainder
    template <typename T>
    inline basic_rgb<T> ceil (basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::ceil; return ceil(f);});
    }

    template <typename T>
    inline basic_rgb<T> floor(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::floor; return floor(f);});
    }

    template <typename T>
    inline basic_rgb<T> fmod(basic_rgb<T> num, basic_rgb<T> denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::fmod; return fmod(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fmod(basic_rgb<T> num, typename basic_rgb<T>::value_type denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::fmod; return fmod(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fmod(typename basic_rgb<T>::value_type num, basic_rgb<T> denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::fmod; return fmod(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> trunc(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::trunc; return trunc(f);});
    }

    template <typename T>
    inline basic_rgb<T> round(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::round; return round(f);});
    }

    template <typename T>
    inline basic_rgb<long> lround(basic_rgb<T> v) noexcept{
        return apply(v, [](T f){using std::lround; return lround(f);});
    }
    template <typename T>
    inline basic_rgb<long long> llround(basic_rgb<T> v) noexcept{
        return apply(v, [](T f){using std::llround; return llround(f);});
    }

    template <typename T>
    inline basic_rgb<T> rint (basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::rint; return rint(f);});
    }

    template <typename T>
    inline basic_rgb<long> lrint(basic_rgb<T> v) noexcept{
        return apply(v, [](T f){using std::lrint; return lrint(f);});
    }
    template <typename T>
    inline basic_rgb<long long> llrint(basic_rgb<T> v)noexcept{
        return apply(v, [](T f){using std::llrint; return llrint(f);});
    }

    template <typename T>
    inline basic_rgb<T> nearbyint(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::nearbyint; return nearbyint(f);});
    }

    template <typename T>
    inline basic_rgb<T> remainder (basic_rgb<T> num, basic_rgb<T> denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::remainder; return remainder(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> remainder (basic_rgb<T> num, typename basic_rgb<T>::value_type denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::remainder; return remainder(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> remainder (typename basic_rgb<T>::value_type num, basic_rgb<T> denom) noexcept {
        return apply(num, denom, [](T f, T g){using std::remainder; return remainder(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> remquo (basic_rgb<T> num, basic_rgb<T> denom, basic_rgb<int> *quot) noexcept {
        return apply(num, denom, quot, [](T f, T g, int *h){using std::remquo; return remquo(f, g, h);});
    }
    template <typename T>
    inline basic_rgb<T> remquo (basic_rgb<T> num, typename basic_rgb<T>::value_type denom, basic_rgb<int> *quot) noexcept {
        return apply(num, denom, quot, [](T f, T g, int *h){using std::remquo; return remquo(f, g, h);});
    }
    template <typename T>
    inline basic_rgb<T> remquo (typename basic_rgb<T>::value_type num, basic_rgb<T> denom, basic_rgb<int> *quot) noexcept {
        return apply(num, denom, quot, [](T f, T g, int *h){using std::remquo; return remquo(f, g, h);});
    }

    // floating point manipulation
    template <typename T>
    inline basic_rgb<T> copysign(basic_rgb<T> x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::copysign; return copysign(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> copysign(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept {
        return apply(x, y, [](T f, T g){using std::copysign; return copysign(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> copysign(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::copysign; return copysign(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> nextafter(basic_rgb<T> x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::nextafter; return nextafter(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> nextafter(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept {
        return apply(x, y, [](T f, T g){using std::nextafter; return nextafter(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> nextafter(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::nextafter; return nextafter(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> nexttoward(basic_rgb<T> x, basic_rgb<long double> y) noexcept {
        return apply(x, y, [](T f, T g){using std::nexttoward; return nexttoward(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> nexttoward(basic_rgb<T> x, long double y) noexcept {
        return apply(x, y, [](T f, T g){using std::nexttoward; return nexttoward(f, g);});
    }
    // Note: The following overload does not use our 'basic_rgb<T>::value_type' pattern to prevent
    //       lookup upon the scalar type, but rather uses just 'T', because otherwise lookup
    //       would not be possible.
    template <typename T>
    inline basic_rgb<T> nexttoward(T x, basic_rgb<long double> y) noexcept {
        return apply(x, y, [](T f, T g){using std::nexttoward; return nexttoward(f, g);});
    }

    // Not implementing the NAN macro constant, because we would need to be able to overload macros.

    // min, max, difference
    template <typename T>
    inline basic_rgb<T> fmin(basic_rgb<T> x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmin; return fmin(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fmax(basic_rgb<T> x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmax; return fmax(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fdim(basic_rgb<T> x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fdim; return fdim(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> fmin(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmin; return fmin(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fmax(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmax; return fmax(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fdim(basic_rgb<T> x, typename basic_rgb<T>::value_type y) noexcept {
        return apply(x, y, [](T f, T g){using std::fdim; return fdim(f, g);});
    }

    template <typename T>
    inline basic_rgb<T> fmin(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmin; return fmin(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fmax(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fmax; return fmax(f, g);});
    }
    template <typename T>
    inline basic_rgb<T> fdim(typename basic_rgb<T>::value_type x, basic_rgb<T> y) noexcept {
        return apply(x, y, [](T f, T g){using std::fdim; return fdim(f, g);});
    }

    // other
    template <typename T>
    inline basic_rgb<T> fabs(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::fabs; return fabs(f);});
    }

    template <typename T>
    inline basic_rgb<T> abs(basic_rgb<T> v) noexcept {
        return apply(v, [](T f){using std::abs; return abs(f);});
    }

    template <typename T>
    inline basic_rgb<T> fma(basic_rgb<T> x, basic_rgb<T> y, basic_rgb<T> z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }
    template <typename T>
    inline basic_rgb<T> fma(basic_rgb<T> x, basic_rgb<T> y, typename basic_rgb<T>::value_type z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }
    template <typename T>
    inline basic_rgb<T> fma(basic_rgb<T> x, typename basic_rgb<T>::value_type y, basic_rgb<T> z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }
    template <typename T>
    inline basic_rgb<T> fma(basic_rgb<T> x, typename basic_rgb<T>::value_type y, typename basic_rgb<T>::value_type z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }

    template <typename T>
    inline basic_rgb<T> fma(typename basic_rgb<T>::value_type x, basic_rgb<T> y, basic_rgb<T> z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }
    template <typename T>
    inline basic_rgb<T> fma(typename basic_rgb<T>::value_type x, basic_rgb<T> y, typename basic_rgb<T>::value_type z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }
    template <typename T>
    inline basic_rgb<T> fma(typename basic_rgb<T>::value_type x, typename basic_rgb<T>::value_type y, basic_rgb<T> z) noexcept {
        return apply(x, y, z, [](T f, T g, T h){using std::fma; return fma(f,g,h);});
    }

    // classification functions

    // comparison functions

}


#endif // CMATH_HH_INCLUDED_20131102
