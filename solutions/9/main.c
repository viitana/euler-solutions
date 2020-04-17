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

    printf("Calculating the difference between the sum of the squares of the first %d numbers and the square of the sum.\n", n);

    unsigned long long sqsum = 0u, sum = 0u;
    for (int i = 0; i <= n; i++)
    {
        sqsum += i * i;
        sum += i;
    }

    printf("Result: %llu\n", sum * sum - sqsum);
    return 0;
}
