// 04/17/2021, Kaushal Bhatol
// give numbres 0 to users input with if else condition

#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("Enter The Value : ");
    scanf("%d", &a);

    if (a > 0 & a <= 50)
    {
        while (b <= a )
        {
            printf("%2.0d\n", b);
            b = b + 1;
        }
    }
    else
    {
        printf("Please enter value between 1 to 50\n");
    }

    return 0;
}
