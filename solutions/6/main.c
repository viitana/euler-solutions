#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DEFAULT_N 100

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the %dth prime number\n", n);

    unsigned count = 0u;
    unsigned long long current = 1u;

    while (count < n)
    {
        current++;
        bool prime = true;
        for (unsigned long long l = 2; l < current; l++)
        {
            if (current % l == 0) prime = false;
        }
        if (prime) count++;
    }

    printf("Result: %llu\n", current);
    return 0;
}
