#include "local.h"

void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n > 55) // for handaling over usage. it was not requierd if you don't want limit..
        {
            printf("You entered more then 55, Please enter less then 55 for print \n");
            break;
        }
        printf("%c", '*');
    }
}

int main()
{
    printf("How much stars you want : ");
    int n = usrValue();
    star(n);
    return 0;
}
