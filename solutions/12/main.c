#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEFAULT_N 500

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the first triangle number with over %d divisors.\n", n);

    unsigned long curr = 0u;
    unsigned long step = 1u;

    for (;;)
    {
        curr += step;
        step++;

        unsigned divisors = 1u; // self already included
        for (unsigned long l = 1u; l <= sqrt(curr); l++)
        {
            if (curr % l == 0)
            {
                divisors++;
                if (curr / l != l) divisors++;
            }
        }
        if (divisors > n) break;
    }

    printf("Result: %lu\n", curr);
}
