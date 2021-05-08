#include "../local.h"

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main(int argc, char const *argv[])
{
    printf("Enter the number : ");
    int n = usrValue();
    printf("factorial of %d is %d\n", n, factorial(n));
    return 0;
}
