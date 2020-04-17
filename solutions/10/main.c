#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEFAULT_N 2000000

int is_prime(unsigned n)
{
    for (unsigned long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the sum of all primes below %d.\n", n);

    unsigned long long sum = 0u;
    for (unsigned i = 2; i < n; i++)
    {
        if (is_prime(i))  sum += i;
    }

    printf("Result: %llu\n", sum);
}
