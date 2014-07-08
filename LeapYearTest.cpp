#include "UnitTest++.h"
#include "LeapYear.h"

    namespace
    {

    TEST(Test_1608)
    {
        const bool Result = IsLeapYear(1608);
        CHECK_EQUAL(true, Result);
    }
    TEST(Test_1620)
    {
        const bool Result = IsLeapYear(1620);
        CHECK_EQUAL(true, Result);
    }
    TEST(Test_0)
    {
        const bool Result = IsLeapYear(0);
        CHECK_EQUAL(true, Result);
    }
    TEST(Test_1700)
    {
        const bool Result = IsLeapYear(1700);
        CHECK_EQUAL(false, Result);
    }
    TEST(Test_10000501)
    {
        const bool Result = IsLeapYear(10000501);
        CHECK_EQUAL(1, Result);
    }

    }
