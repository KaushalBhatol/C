#include<stdio.h>


int main(int argc, char const *argv[])
{
    float a;
    a = 744.5555;
    printf("\n0.2f our float value  = %0.2f", a);
    printf("\n2.0f our float value  = %2.0f", a);
    printf("\n2f our float value  = %2f .. it is error.. don't use this. :)", a);
    return 0;
}
