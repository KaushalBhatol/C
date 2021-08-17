// #include<stdio.h>

// int sum(int a, int b){
//     return a+b;
// }

// int main()
// {
//     int a, b, c;
//     a= 4;
//     b= 5;
//     c = sum(a,b);

//     printf("%d\n", c);

//     return 0;
// }

#include <stdio.h>
int sum(int a, int b); // declare function and write after main

int main()
{
    int a, b, c;
    a = 4;
    b = 5;
    c = sum(a, b);

    printf("%d\n", c);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}