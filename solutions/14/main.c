#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEFAULT_N 1000000

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = abs(atoi(argv[1]));
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Finding the starting number under %d that produces the longest Collatz sequence.\n", n);

    unsigned long curr = 0u;
    unsigned long step = 1u;

    unsigned best_starter = 1u;
    unsigned best_chain = 1u;

    for (int i = 2; i <= n; i++)
    {
        unsigned current = i;
        unsigned count = 1u;
        while (current != 1)
        {
            if (current % 2 == 0) current = current / 2;
            else current = 3 * current + 1;
            count++;
        }
        if (count > best_chain)
        {
            best_chain = count;
            best_starter = i;
        }
    }

    printf("Result: starting number %u with a chain of %u numbers.\n", best_starter, best_chain);
}
