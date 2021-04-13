#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    // Logical operators
    printf("\n=>Logical operators\n");
    // input from user
    printf("\nNote :Enter Values 0 or 1 only!:\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Enterd values are : a = %d and b = %d\n", a, b);
    // output 
    printf("a AND b = a&&b = %d\n", a&&b);
    printf("a OR b = a||b = %d\n", a||b);
    printf("NOT a = !a = %d\n",!a);
    printf("NOT b = !b = %d\n",!b);


    
    return 0;
}
