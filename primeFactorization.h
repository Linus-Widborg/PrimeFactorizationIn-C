#ifndef ERICSSONINTERVJU_PRIMEFACTORIZATION_H
#define ERICSSONINTERVJU_PRIMEFACTORIZATION_H
struct FactorizedPrime {
    int size;
    int prime_factors[4];
};

struct FactorizedPrime factorizeIntoPrimeNumber(int number);

#endif //ERICSSONINTERVJU_PRIMEFACTORIZATION_H
