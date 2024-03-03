// Copyright 2024 Karagodin Andrey
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrime, TestAlgorithmWorking) {
    EXPECT_TRUE(checkPrime(3));
}
TEST(checkPrime, TestNumberOne) {
    EXPECT_FALSE(checkPrime(1));
}
TEST(checkPrime, TestBigNumber) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_FALSE(checkPrime(100000));
}

TEST(nPrime, TestAlgorithmWorking) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(3, nPrime(2));
    EXPECT_EQ(5, nPrime(3));
}
TEST(nPrime, TestNumberZero) {
    EXPECT_EQ(0, nPrime(0));
}
TEST(nPrime, TestBigNumber) {
    EXPECT_EQ(97, nPrime(25));
}
TEST(nextPrime, TestAlgorithmWorking) {
    EXPECT_EQ(7, nextPrime(5));
}
TEST(nextPrime, TestBigNumber) {
    EXPECT_EQ(97, nextPrime(89));
}
TEST(sumPrime, TestAlgorithmWorking) {
    EXPECT_EQ(197, sumPrime(40));
}
TEST(sumPrime, TestBigNumber) {
    EXPECT_EQ(454396537, sumPrime(100000));
}
