#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter Values :\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Enterd values are : a = %d and b = %d\n", a, b);

    //Arthmetic Oprator
    printf("\n=> 01 Arthmetic Oprator\n");
    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d\n", a/b);

    // Relation operators
    printf("\n=> 02 Relation operators\n");
    printf("a==b : %d\n",a==b);
    printf("a!=b : %d\n",a!=b);
    printf("a>b  : %d\n",a>b);
    printf("a<=b : %d\n",a<=b);
    printf("and <, >=.. \n");

    return 0;
}
