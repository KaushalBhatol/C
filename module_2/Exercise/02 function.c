// creat function to enter the a and b value, also sum of a and b

#include <stdio.h>

// gatting value from user
int getvalue()
{
    int value;
    scanf("%d", &value);
    return value;
}

// sum of a and b
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    printf("Enter the value of a : ");
    a = getvalue();
    printf("Enter the value of b : ");
    b = getvalue();
    c = sum(a, b);
    printf("a is = %d and b is = %d\nSum of a and b is = %d", a, b, c);
    return 0;
}
