// 04/15/2021, Kaushal Bhatol
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    // tell condiition
    printf("\n1) if a is grter 10 and less then 20, Output : between 10 to tweenty\n");
    printf("2) if a is greter 20, Output: a is greater then 20.\n");
    // input from user 
    printf("Enter Value of a :");
    scanf("%d", &a);
    printf("Enterd value is = %d\n", a);
    // Output
    if(a>=10){  // nested if :)
        if(a==10){
            printf("You entered 10 as a value\n");
        }
        else if(a<20)
        {
            printf("a is between 10 to tweenty\n");
        }
        else{
            printf("a is greter then 20\n");
        }
    }
    else{
        printf("You entered value less then 10\n");
    }
    return 0;
}