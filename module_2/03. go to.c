#include<stdio.h>

int main()
{
    // // Part one
    // printf("This is tope text \n");
    // ab:
    //     printf("this is an print\n");
    // hello:
    //     printf("this is hello text \n");
    //     goto end;
    // goto hello;
    // end:
    //     printf("afrer end value is an end");

    // part two, with loop
    int num;
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the number, enter 0 to exit the loop");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:

    return 0;
}
