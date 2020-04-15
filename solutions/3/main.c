#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_N 600851475143u 

int main(int argc, char** argv)
{
    unsigned long long n = 0;
    if (argc > 1)
    {
        n = strtoll(argv[1], NULL, 10);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating largest prime factor of %llu.\n", n);

    unsigned long long product = n;
    unsigned long long result = 0;
    while (!result)
    {
        for(int i = 2; i <= product; i++)
        {
            if (product == i) result = product;
            if (product % i == 0)
            {
                product = product / i;
                break;
            }
        }
    }

    printf("Largest product: %llu\n", result);
    return 0;
}
