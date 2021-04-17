// 04/16/2021, Kushal Bhatol
 #include <stdio.h>

 int main(int argc, char const *argv[])
 {
    int age;
    printf("Enter Your age : ");
    scanf("%d", &age);

    switch (age)
    {
    case 22:
        printf("your age is 22\n");
        break;

    case 17:
        printf("your age is 17\n");
        break;

    default:
        printf("Please enter valid age\n");
    }
    return 0;
 }
 