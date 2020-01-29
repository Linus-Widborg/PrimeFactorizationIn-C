#include <stdbool.h>
#include "primeFactorization.h"

static bool primeNumber(int number);
static int lowestDivisiblePrime(int number);

struct FactorizedPrime factorizeIntoPrimeNumber(int number) {
    struct FactorizedPrime result;
    result.size = 0;
    while(!primeNumber(number)) {
        int prime = lowestDivisiblePrime(number);
        result.prime_factors[result.size] = prime;
        number = number / prime;
        result.size++;
    }
    result.prime_factors[result.size] = number;
    result.size++;

    return result;
}

int lowestDivisiblePrime(int number) {
    for(int divisor = 2; divisor < number; divisor++) {
        if (number % divisor == 0) {
            return divisor;
        }
    }
    return 1;
}

bool primeNumber(int number) {
    for(int divisor = 2; divisor < number; divisor++) {
        if (number % divisor == 0) {
            return false;
        }
    }
    return true;
}

