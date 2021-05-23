/*
    Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
    Test Data :
    Input the number of elements to store in the array :3
    Input 3 number of elements in the array :
    element - 0 : 2
    element - 1 : 5
    element - 2 : 7
    Expected Output :
    The values store into the array are :
    2 5 7
    The values store into the array in reverse are :
    7 5 2
*/
#include <stdio.h>

int main()
{
    int value[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter value[%d] = ", i);
        scanf("%d", &value[i]);
    }
    printf("Entered values are : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", value[i]);
    }
    printf("\nreverse value are : ");
    for (int i = 0; i < 3; i++)
    {
        int j = 2 - i;
        printf("%d ", value[j]);
    }

    return 0;
}
