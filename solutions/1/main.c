#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_N 1000

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the sum of all the multiples of 3 or 5 below %d.\n", n);
    int sum = 0, p = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (p % 3 == 0 || p % 5 == 0) sum += p;
        p++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}
