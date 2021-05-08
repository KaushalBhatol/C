// creat a table using manual created header file

#include "../../local.h"

int main(int argc, char const *argv[])
{
    printf("Enter the value for table : ");
    int n = usrIntInputValue();
    printf("\n    Table of %d\n", n);
    MultiplicationTable(n);
    return 0;
}
