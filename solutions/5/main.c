#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DEFAULT_N 10

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating The smallest number that can be divided by each of the numbers from 1 to %d\n", n);

    unsigned long long max = 1u;
    for (int i = 2; i <= n; i++)
    {
        max *= i;
    }

    unsigned long long result = max;

    for (unsigned long long l = max-1u; l > 0u; l--)
    {
        bool divisible = true;
        for (unsigned u = 1u; u <= n; u++)
        {
            if (l % u != 0) divisible = false;
        }
        if (divisible) result = l;
    }

    printf("Result: %llu\n", result);
    return 0;
}
