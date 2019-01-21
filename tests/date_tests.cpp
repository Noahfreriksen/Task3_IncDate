#include <gtest/gtest.h>
#include "../lib/date.h"
#include "../lib/date.cpp"

/*
 * Test bench that testes the main function of the date class
 */

TEST(date_tests, ToString){
    date d1;
    d1.now = 30;
    d1.inc(2);
    ASSERT_EQ("3-1-1970", d1.toString());
}

