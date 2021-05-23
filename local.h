#include <stdio.h>
int usrIntInputValue()
{
    int value;
    scanf("%d", &value);
    return value;
}
char usrCharInputValue()
{
    char value;
    scanf("%c", &value);
    return value;
}
float usrFloatInputValue()
{
    float value;
    scanf("%f", &value);
    return value;
}
int MultiplicationTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%3.0d  x %3.0d = %3.0d\n", n, i, n * i);
    }
}
