#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_N 4000000

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating the sum of all even fibonacci sequence terms below %d.\n", n);

    int sum = 2, p2 = 1, p1 = 2, p0 = 0;
    for (;;)
    {
        p0 = p1 + p2;
        if (p0 >= n) break;
        if (p0 % 2 == 1) sum += p0;
        p2 = p1;
        p1 = p0;
    }

    printf("Sum: %d\n", sum);
    return 0;
}
