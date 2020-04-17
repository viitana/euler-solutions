#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("Calculating Pythagorean triplet for which the sum is 1000.\n");

    for (int c = 0; c < 1000; c++)
    for (int b = 0; b < c; b++)
    for (int a = 0; a < b; a++)
    {
        if (a * a + b * b == c * c && a + b + c == 1000)
        {
            printf("Result: %d * %d * %d = %d\n", a, b, c, a * b * c);
            return 0;
        }
    }
}
