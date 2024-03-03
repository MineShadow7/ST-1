// Copyright 2022 NNTU-CS
#include <cstdint>
#include "../include/alg.h"

// Function to check whether a number is prime or not
bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

// Finding the nth prime number in the series
uint64_t nPrime(uint64_t n) {
    uint64_t num = 0;
    uint64_t res = 0;
    while (n > 0) {
     if (checkPrime(num)) {
      res = num;
      --n;
    }
    ++num;
  }
  return res;
}

// The function returns the found prime number
uint64_t nextPrime(uint64_t value) {
  while (true) {
    ++value;
    if (checkPrime(value)) {
      return value;
    }
  }
}

// The function returns the sum of all prime numbers between 1 and hbound
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
