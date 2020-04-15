#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DEFAULT_N 3

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the largest palindrome made from the product of two %d-digit numbers.\n", n);

    char str[22];
    unsigned long long max = 1u, result = 0u, f1 = 0u, f2 = 0u;
    for (int i = 0; i < n; i++)
    {
        max *= 10u;
    }
    max -= 1u;

    for (unsigned long long a = 0u; a <= max; a++)
    {
        for (unsigned long long b = 0u; b <= a; b++)
        {
            unsigned long long product = a * b;
            sprintf(str, "%llu", product);
            bool palindrome = true;
            for (int i = 0; i < strlen(str) / 2; i++)
            {
                if (str[i] != str[strlen(str) - i - 1]) palindrome = false;
            }
            if (palindrome && result < product)
            {
                result = product;
                f1 = a;
                f2 = b;
            }
        }
    }

    printf("Palindrome: %llu = %llu × %llu\n", result, f1, f2);
    return 0;
}
