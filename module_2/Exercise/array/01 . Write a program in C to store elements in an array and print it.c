// Write a program in C to store elements in an array and print it
#include <stdio.h>
int main()
{
    int ab[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter value of ab[%d] = ", i);
        scanf("%d", &ab[i]);
    }
    
    printf("elements in arrays are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ab[i]);
    }
    return 0;
}
