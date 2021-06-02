#include "../local.h"

int main()
{
    // // ex 1
    // int marks[4];
    // marks[0] = 1;
    // marks[1] = 11;
    // marks[2] = 22;
    // marks[3] = 33;
    // printf("%d is our seconnd marks \n", marks[1]);

    //    // example 2
    //    int marks[4] = {22, 33, 44, 24};
    //    printf("value of marks 3 is %d", marks[3]);

    // // example 1.2
    // int marks[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d elements of th arrays\n", i);
    //     marks[i] = usrIntInputValue();
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the value of %d element of the array is %d\n", i, marks[i]);
    // }

    // example 3 two-diman
    int arr[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    printf("the marks class 2 roll no 3 is %d\n", arr[2][1]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // marks[line][row]

    return 0;
}
