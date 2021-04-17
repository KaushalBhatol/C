// 04/16/2021, Kushal Bhatol
 #include <stdio.h>

 int main(int argc, char const *argv[])
 {
    int age, marks;
    printf("Enter Your age : ");
    scanf("%d", &age);
    printf("Enter Your marks : ");
    scanf("%d", &marks);

    switch (age)
    {
    case 22:
        printf("your age is 22\n");
        switch (marks)  // Nested switch
        {
        case 33:
            printf("your maaks is 33\n");
            break;
        
        default:
            printf("your marks is not 33\n");
            break;
        }
        break;

    case 17:
        printf("your age is 17\n");
        break;

    default:
        printf("Please enter valid age\n");
    }
    return 0;
 }
 