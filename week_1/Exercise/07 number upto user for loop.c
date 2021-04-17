// 04/17/2021, Kaushal Bhatol
// give numbres 0 to users input with if else condition

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter The Value : ");
    scanf("%d", &b);

    if (b > 0 & b <= 100)
    {
        for (a = 0; a <= b; a++)
        {
            printf("%3.0d\n", a);
        }
    }
    else
    {
        printf("Enter value between 1 to 100\n");
    }

    return 0;
}
