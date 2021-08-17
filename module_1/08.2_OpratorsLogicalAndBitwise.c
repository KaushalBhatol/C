#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    // input from user
    printf("\nNote :Enter Values 0 or 1 only!:\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Enterd values are : a = %d and b = %d\n", a, b);

    // Logical operators
    printf("\n=>01 Logical operators\n");
    printf("a AND b = a&&b = %d\n", a&&b);
    printf("a OR b = a||b = %d\n", a||b);
    printf("NOT a = !a = %d\n",!a);
    printf("NOT b = !b = %d\n",!b);

    // Bitwise operators
    printf("\n=>02 Bitwise operators\n");
    printf("a AND b = %d\n", a&b);
    printf("a OR b = %d\n", a|b);
    printf("a XOR b = %d .. when both a and b values are true and false it give true \n ",a^b);
    
    return 0;
}
