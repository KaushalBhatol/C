#include <stdio.h>

int main()
{
    int a, b;
    printf("more then 50 is breack the loop\n");
    printf("Enter The value : ");
    scanf("%d", &b);
    for (a = 0; a <= b; a++)
    {
        printf("%d\n", a);
        if (b > 50)
        {
            break;
        }
    }

    return 0;
}
