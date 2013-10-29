// (C) 2013 Sebastian Mach (1983), this file is published under the terms of the
// GNU General Public License, Version 3 (a.k.a. GPLv3).
// See COPYING in the root-folder of the excygen project folder.

#include "gaudy/RGB.hh"
#include "gaudy/algorithm.hh"
#include "catch.hpp"


TEST_CASE("algorithm/lerp", "lerp tests")
{
    using gaudy::lerp;
    using gaudy::lerp_sat;
    using gaudy::RGB;
    using gaudy::Interval;
    using gaudy::interval;

    SECTION("lerp(a,b, f)") {
        REQUIRE(lerp(1,2,  0.5) == 1.5);
        REQUIRE(lerp(-1,1, 0.5) == 0);
        REQUIRE(lerp(-1,1, 1.5) == 2);
        REQUIRE(lerp(-1,1, 2)   == 3);
        REQUIRE(lerp(-1,1, -1)  == -3);
        REQUIRE(lerp(-1,1, -1.5) == -4);
        REQUIRE(lerp(-1,1, -2)   == -5);
        REQUIRE(lerp(RGB(0,0,0), RGB(1,2,3), 0.0         ) == RGB(0,0,0));
        REQUIRE(lerp(RGB(0,0,0), RGB(1,2,3), 0.5         ) == RGB(0.5,1,1.5));
        REQUIRE(lerp(RGB(0,0,0), RGB(1,2,3), 1.0         ) == RGB(1,2,3));
        REQUIRE(lerp(RGB(0,0,0), RGB(1,2,3), RGB(0,0.5,1)) == RGB(0,1,3));
        REQUIRE(lerp(RGB(0,0,0), 1         , RGB(0,0.5,1)) == RGB(0,0.5,1));
        REQUIRE(lerp(0         , 1         , RGB(0,0.5,1)) == RGB(0,0.5,1));
    }

    SECTION("lerp([a..b], f)") {
        REQUIRE(lerp(interval(1,2),  0.5) == 1.5);
        REQUIRE(lerp(interval(-1,1), 0.5) == 0);
        REQUIRE(lerp(interval(-1,1), 1.5) == 2);
        REQUIRE(lerp(interval(-1,1), 2)   == 3);
        REQUIRE(lerp(interval(-1,1), -1)  == -3);
        REQUIRE(lerp(interval(-1,1), -1.5) == -4);
        REQUIRE(lerp(interval(-1,1), -2)   == -5);

        REQUIRE(lerp(interval(-1,1), RGB(-1,0.5,2) == RGB(-3,0,3)));
    }

    SECTION("lerp_sat(a,b, f)") {
        REQUIRE(lerp_sat(1,2,  0.5) == 1.5);
        REQUIRE(lerp_sat(-1,1, 0.5) == 0);
        REQUIRE(lerp_sat(-1,1, 1.5) == 1);
        REQUIRE(lerp_sat(-1,1, 2)   == 1);
        REQUIRE(lerp_sat(-1,1, -1)  == -1);
        REQUIRE(lerp_sat(-1,1, -1.5) == -1);
        REQUIRE(lerp_sat(-1,1, -2)   == -1);
    }

    SECTION("lerp_sat([a..b], f)") {
        REQUIRE(lerp_sat(interval(1,2),  0.5) == 1.5);
        REQUIRE(lerp_sat(interval(-1,1), 0.5) == 0);
        REQUIRE(lerp_sat(interval(-1,1), 1.5) == 1);
        REQUIRE(lerp_sat(interval(-1,1), 2)   == 1);
        REQUIRE(lerp_sat(interval(-1,1), -1)  == -1);
        REQUIRE(lerp_sat(interval(-1,1), -1.5) == -1);
        REQUIRE(lerp_sat(interval(-1,1), -2)   == -1);

        REQUIRE(lerp(interval(-1,1), RGB(-1,0.5,2) == RGB(-1,0,2)));
    }

    SECTION("lerp({x_1,x_2,..,x_n}, f)") {
        /*REQUIRE(lerp({0,1,2},  0.0) == 1);
        REQUIRE(lerp({0,1,2},  0.5) == 1);
        REQUIRE(lerp({0,1,2},  1.0) == 1);
        REQUIRE(lerp({0,1,2},  2.0) == 4);*/
    }
}

TEST_CASE("algorithm/bilerp", "bilerp tests")
{
}
