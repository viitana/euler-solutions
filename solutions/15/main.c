#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEFAULT_N 20

int main(int argc, char** argv)
{
    int n = 0;
    if (argc > 1)
    {
        n = abs(atoi(argv[1]));
    }
    if (n <= 0) n = DEFAULT_N;

    printf("Calculating all the possible routes for a %dx%d grid.\n", n, n);

    unsigned long arr[n+1][n+1];

    for (int i = 1; i <= n; i++)
    {
        arr[i][0] = 1u;
        arr[0][i] = 1u;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
            arr[j][i] = arr[j-1][i] + arr[j][i-1];
        }
    }

    printf("Result: %lu\n", arr[n][n]);
}
