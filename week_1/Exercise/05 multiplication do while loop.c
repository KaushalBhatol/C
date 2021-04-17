#include <stdio.h>

int main()
{
    int a, b = 1;
    printf("Enter number for multiplication\n number : ");
    scanf("%d", &a);

    do
    {
        printf("%dx%d = %2.0d\n", a, b, a * b); //%2.0 used for equal spacing in output
        b = b + 1;
    } while (b < 11);

    return 0;
}
