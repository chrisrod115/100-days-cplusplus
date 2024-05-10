#include <gtest/gtest.h>
#include "tip_calculator.h"

TEST(TipCalculatorTest, CalculateTip) {
    EXPECT_FLOAT_EQ(calculateTip(100.0f, 15.0f), 15.0f);
    EXPECT_FLOAT_EQ(calculateTip(50.0f, 20.0f), 10.0f);
    // Add more test cases as needed
}

TEST(TipCalculatorTest, CalculateTotal) {
    EXPECT_FLOAT_EQ(calculateTotal(100.0f, 15.0f), 115.0f);
    EXPECT_FLOAT_EQ(calculateTotal(50.0f, 10.0f), 60.0f);
    // Add more test cases as needed
}

TEST(TipCalculatorTest, CalculatePerPerson) {
    EXPECT_FLOAT_EQ(calculatePerPerson(115.0f, 2), 57.5f);
    EXPECT_FLOAT_EQ(calculatePerPerson(60.0f, 3), 20.0f);
    // Add more test cases as needed
}


