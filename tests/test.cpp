#include <iostream>

#include <catch2/catch.hpp>

//Write a function that returns true or false depending on whether
//its input integer is a leap year or not.
// - A leap year is defined as one that is divisible by 4
// but is not otherwise divisible by 100
// unless it is also divisible by 400
//
// Examples - test list / notes
// +  2001 is a typical common year
// + 1996 is a typical leap year
// + 1900 is an atypical common year
// + and 2000 is an atypical leap year

bool IsLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    return year % 4 == 0;
}

TEST_CASE( "2001 is a typical common year" )
{
    REQUIRE( !IsLeapYear(2001) );
}

TEST_CASE( "1996 is a typical leap year" )
{
    REQUIRE( IsLeapYear(1996) );
}

TEST_CASE( "1900 is an atypical common year" )
{
    REQUIRE( !IsLeapYear(1900) );
}

TEST_CASE( "2000 is an atypical leap year" )
{
    REQUIRE( IsLeapYear(2000) );
}