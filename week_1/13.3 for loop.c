#include <stdio.h>
int main()
{
    int a, b;
    // a = 0;
    // b = 2;
    printf("a b\n");
    for (a = 0, b = a+1; a <= 5; a++, b++)
    // for (; a < 5, b < 10; a++, b++)
    {
        printf("%d %d\n", a, b);
        // b = b+1;
    }
    return 0;
}
