#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    // table of a 
    printf("Enter the value for table : ");
    scanf("%d", &a);

    for (b = 0; b <= 10; b++)
    {
        printf("%d x %d = %d\n", a, b, a*b);

    }
    
    return 0;
}
