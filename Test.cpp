#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;
using namespace ariel;

// 1 km = 1000 m = 100000 cm
// 1 m = 100 cm 
// 1 kg = 1000 g 
// 1 ton = 1000 kg = 1000000 g
// 1 hour = 60 min
// 1 min = 60 sec
// 1 USD = 3.33 ILS

TEST_CASE("operator+")
{
    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(500,"kg");
    NumberWithUnits g(1000000,"g");
    //CHECK(ton+kg == g);

    NumberWithUnits h1(1,"hour");
    NumberWithUnits h2(2,"hour");
    NumberWithUnits min(180,"min");
    //CHECK(h1+h2 == min);

}

TEST_CASE("operator+=")
{
    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(500,"kg");
    NumberWithUnits g(1000000,"g");
    CHECK((ton+=kg)==g);

    NumberWithUnits h1(1,"hour");
    NumberWithUnits h2(2,"hour");
    NumberWithUnits min(180,"min");
    CHECK((h1+=h2)==min);
}

TEST_CASE("operator-")
{
    NumberWithUnits h1(1,"hour");
    NumberWithUnits h2(2,"hour");
    NumberWithUnits min(60,"min");
    CHECK(h2-h1 == min);

    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(500,"kg");
    NumberWithUnits g(1000000,"g");
    CHECK(g-kg == ton);

}


TEST_CASE("operator<")
{
    NumberWithUnits h1(5,"hour");
    NumberWithUnits h2(2,"hour");
    NumberWithUnits min(60,"min");
    CHECK(h2  <   h1);
    CHECK(min <  h2);
    CHECK(min < h1);

    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(245,"kg");
    NumberWithUnits g(1000000,"g");
    CHECK(kg <  ton);
    CHECK(kg < g);
    CHECK(ton < g);

}
// 1 km = 1000 m = 100000 cm
// 1 m = 100 cm 
// 1 kg = 1000 g 
// 1 ton = 1000 kg = 1000000 g
// 1 hour = 60 min
// 1 min = 60 sec
// 1 USD = 3.33 ILS

TEST_CASE("operatro<=")
{
    NumberWithUnits d1(5,"USD");
    NumberWithUnits i1(5,"ILS");
    CHECK(i1 <= d1);

    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(245,"kg");
    NumberWithUnits g(1000000,"g");
    CHECK(kg <= ton);
    CHECK(kg <= g);
    CHECK(ton <= g);

    
}

TEST_CASE("operator>")
{
    NumberWithUnits h1(5,"hour");
    NumberWithUnits h2(2,"hour");
    NumberWithUnits min(60,"min");
    CHECK(h1 > h2);
    CHECK(h2 > min);
    CHECK(h1 > min);

    NumberWithUnits ton(0.5,"ton");
    NumberWithUnits kg(245,"kg");
    NumberWithUnits g(1000000,"g");
    CHECK(ton > kg);
    CHECK(g > kg);
    CHECK(g > ton);
}