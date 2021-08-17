#include <stdio.h>
int multiplication();

int main(int argc, char const *argv[])
{
    int x;
    printf("enter the value for multiplication: ");
    scanf("%d", &x);
    multiplication(x);
    return 0;
}
