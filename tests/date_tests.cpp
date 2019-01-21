#include <gtest/gtest.h>
#include "../lib/date.h"
#include "../lib/date.cpp"

/*
 * Test bench that testes the 3 functions of the date class
 */

TEST(date_tests, ConstructorTest){
    time_t now = time(nullptr);
    date d1;
    ASSERT_EQ(now, d1.now);
}

TEST(date_tests, IncTest){
    time_t t1 = 386400;
    date d1;
    d1.now = 300000;
    d1.inc(1);
    ASSERT_EQ(t1, d1.now);
}

TEST(date_tests, ToString){
    date d1;
    d1.now = 30;
    ASSERT_EQ("1-1-1970", d1.toString());
}

