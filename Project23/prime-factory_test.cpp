#include "prime-factory.cpp"
#include "gmock/gmock.h"

using namespace std;

TEST(PrimeFators, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
}


TEST(PrimeFators, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};

	EXPECT_EQ(expected, prime_factor.of(2));
}