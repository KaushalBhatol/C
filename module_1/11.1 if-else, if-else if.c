// 04/15/2021, Kaushal Bhatol
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // if statement
    if(3>2){
        printf("if statement 3>2\n");
    }
    // if else if statment
    if(3>1){    // Condition 1
        printf("3>1");
    }
    else if(5>3){   // condition 2
        printf("5>3");
    }
    else {
        printf("condition are Mismatch");
    }
    return 0;
}
