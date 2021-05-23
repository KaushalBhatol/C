/* Q. Write a c program to calculate area of a rectangle.
a. Using hard coded inputs
b. using inputs supplied by the user
*/

/* Ans =
==>Formula
A= W x H 
A is the area of the rectangle
W is the width of the rectangle
H is the height of the rectangle
==> Algorithm
1.Define the width of the rectangle.
2.Define the Height of the rectangle.
3.Define Area of the rectangle.
4.Calculate the area of the rectangle by multiplying the width and height of the rectangle.
5.Assign the area of the rectangle to the area variable.
6.print the area of the rectangle.
*/
#include<stdio.h>

int main(){
    printf("\n\nQ. Write a c program to calculate area of a rectangle. \n a. Using hard coded inputs \n b. using inputs supplied by the user\n");
    // ans A
    int W =4;
    int H =7;
    printf("\nAns: Formula A= W x H \nAns a. Values are : W=%d ,H=%d",W ,H);
    printf("\n A = W x H\n A = %d x %d\n A = %d",W ,H ,W*H );
    // Ans B
    // get W and H Values from User
    printf("\n\nAns b.\n W = "); scanf("%d", &W);
    printf(" H = "); scanf("%d", &H);
    // Calculate and Output
    printf("\nValues are : W=%d ,H=%d",W ,H);
    printf("\n A = W x H\n A = %d x %d\n A = %d",W ,H ,W*H );
    return 0;
}