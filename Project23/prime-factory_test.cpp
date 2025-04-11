#include "prime-factory.cpp"
#include "gmock/gmock.h"

using namespace std;

TEST(PrimeFators, PrimeTest) {
	PrimeFactor prime_factor;
	vector<int> expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
}