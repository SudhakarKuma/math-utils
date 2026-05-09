#include <gtest/gtest.h>
#include "math_utils.hpp"

TEST(MathUtilsTest, Add) {
    EXPECT_EQ(mathutils::add(2, 3), 5);
}

TEST(MathUtilsTest, Subtract) {
    EXPECT_EQ(mathutils::subtract(10, 4), 6);
}

TEST(MathUtilsTest, Multiply) {
    EXPECT_EQ(mathutils::multiply(3, 4), 12);
}

TEST(MathUtilsTest, Divide) {
    EXPECT_EQ(mathutils::divide(12, 3), 4);
}

TEST(MathUtilsTest, DivideByZero) {
    EXPECT_THROW(
        mathutils::divide(5, 0),
        std::runtime_error
    );
}

TEST(MathUtilsTest, Prime) {
    EXPECT_TRUE(mathutils::isPrime(13));
    EXPECT_FALSE(mathutils::isPrime(12));
}