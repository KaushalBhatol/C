#include <stdio.h>

int main()
{
    int a, b;
    printf("more then 50 is continue the loop and skip line\n");
    printf("Enter The value : ");
    scanf("%d", &b);

    for (a = 0; a <= b; a++)
    {
        printf("%d\n", a);
        if (b > 50)
        {
            continue;
        }
        printf("This is code after continue \n");
    }

    return 0;
}
