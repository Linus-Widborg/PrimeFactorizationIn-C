#include "3pp/cgreen-1.2.0/include/cgreen/cgreen.h"
#include "../primeFactorization.h"

Describe(PrimeFactorization);
BeforeEach(PrimeFactorization) {}
AfterEach(PrimeFactorization) {}

Ensure(PrimeFactorization, factorizing_two_shall_give_two_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(2);
    assert_that(factorizedPrime.size == 1);
    assert_that(factorizedPrime.prime_factors[0] == 2);
}

Ensure(PrimeFactorization, factorizing_five_shall_give_five_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(5);
    assert_that(factorizedPrime.size == 1);
    assert_that(factorizedPrime.prime_factors[0] == 5);
}

Ensure(PrimeFactorization, factorizing_four_shall_give_two_two_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(4);
    assert_that(factorizedPrime.size == 2);
    assert_that(factorizedPrime.prime_factors[0] == 2);
    assert_that(factorizedPrime.prime_factors[1] == 2);
}

Ensure(PrimeFactorization, factorizing_six_shall_give_two_three_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(6);
    assert_that(factorizedPrime.size == 2);
    assert_that(factorizedPrime.prime_factors[0] == 2);
    assert_that(factorizedPrime.prime_factors[1] == 3);
}

Ensure(PrimeFactorization, factorizing_nine_shall_give_three_three_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(9);
    assert_that(factorizedPrime.size == 2);
    assert_that(factorizedPrime.prime_factors[0] == 3);
    assert_that(factorizedPrime.prime_factors[1] == 3);
}

Ensure(PrimeFactorization, factorizing_twentyfive_shall_give_five_five_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(25);
    assert_that(factorizedPrime.size == 2);
    assert_that(factorizedPrime.prime_factors[0] == 5);
    assert_that(factorizedPrime.prime_factors[1] == 5);
}

Ensure(PrimeFactorization, factorizing_eight_shall_give_two_two_two_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(8);
    assert_that(factorizedPrime.size == 3);
    assert_that(factorizedPrime.prime_factors[0] == 2);
    assert_that(factorizedPrime.prime_factors[1] == 2);
    assert_that(factorizedPrime.prime_factors[2] == 2);
}

Ensure(PrimeFactorization, factorizing_2401_shall_give_7_7_7_7_as_a_result)
{
    struct FactorizedPrime factorizedPrime = factorizeIntoPrimeNumber(2401);
    assert_that(factorizedPrime.size == 4);
    assert_that(factorizedPrime.prime_factors[0] == 7);
    assert_that(factorizedPrime.prime_factors[1] == 7);
    assert_that(factorizedPrime.prime_factors[2] == 7);
    assert_that(factorizedPrime.prime_factors[3] == 7);
}

int main(int argc, char **argv) {
    TestSuite *suite = create_test_suite();
    add_test_with_context(suite, PrimeFactorization, factorizing_two_shall_give_two_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_five_shall_give_five_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_four_shall_give_two_two_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_six_shall_give_two_three_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_nine_shall_give_three_three_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_twentyfive_shall_give_five_five_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_eight_shall_give_two_two_two_as_a_result);
    add_test_with_context(suite, PrimeFactorization, factorizing_2401_shall_give_7_7_7_7_as_a_result);
    return run_test_suite(suite, create_text_reporter());
}