#include<stdio.h>

int main(){
    float a, b;
    int c;
    // Input
    printf("\nEnter Float values \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("Enter Int values \n");
    printf("c = ");
    scanf("%d", &c);
    // Output
    printf("\n entered Values are \n a = %f ,b = %f ,c = %d\n\n",a ,b ,c);

    printf("a - b = %f\n", a-b);
    printf("a + b = %f\n", a+b);
    printf("a * b = %f\n", a*b);
    printf("a / b = %f\n", a/b);
    printf ("And \n");
    printf("a - b+c = %f\n", a-b+c);
    printf("a + b+c = %f\n", a+b+c);
    printf("a * b+c = %f\n", a*b+c);
    printf("a / b+c = %f\n", a/b+c);
    return 0;
}