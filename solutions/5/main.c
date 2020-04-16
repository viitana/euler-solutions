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

    unsigned long long current = n;
    for (;;)
    {
        bool divisible = true;
        for (unsigned u = 1u; u <= n; u++)
        {
            if (current % u != 0) divisible = false;
        }
        if (divisible)
        {
            break;
        }
        current++;
    }

    printf("Result: %llu\n", current);
    return 0;
}
