#include <stdio.h>
#define MAX 10

int multiplication(int x)
{
    int i = 1;
    while (i <= MAX)
    {
        printf("%3d x %2d = %5d \n", x, i, x*i);
        i++;
    }
}