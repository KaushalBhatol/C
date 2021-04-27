#include<stdio.h>

int getnum(){
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    return a;
}

int main(int argc, char const *argv[])
{
    int a = getnum();
    printf("Entered num is %d\n", a);

    return 0;
}
