#include "gtest/gtest.h"
#include "../MyProject/arithmetic.h"

TEST(SquareTests, Square)
{
	EXPECT_EQ(0, square(0));
	EXPECT_EQ(4, square(-2));
}

TEST(DivisionTests, Different) {
	EXPECT_EQ(2, division(4, 2));
	EXPECT_EQ(3, division(21, 7));
}

TEST(DivisionTests, Same) {
	EXPECT_EQ(1, division(4, 4));
	EXPECT_EQ(1, division(354, 354));
}
