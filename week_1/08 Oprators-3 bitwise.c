#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,  b;
    // Bitwise operators
    printf("\n=> Bitwise operators\n");
    // input from user
    printf("\nEnter Values :\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Enterd values are : a = %d and b = %d\n", a, b);
    // Output
    printf("a&b = %d\n", a&b);
    printf("a|b = %d\n", a|b);
    printf("a^b = %d\n",a^b);
    return 0;
}
