#include<stdio.h>

int main()
{
    int a, b;
    // Input
    printf("\nEnter first Value\n");
    scanf("%d", &a);
    printf("Enter Second Value\n");
    scanf("%d", &b);
    // Output
    printf("\nEntered value are :\na = %d ,b = %d \nCalculation of a and b :\n",a ,b);
    printf("a - b = %d\n", a-b);
    printf("a + b = %d\n", a+b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);

    return 0;
}
