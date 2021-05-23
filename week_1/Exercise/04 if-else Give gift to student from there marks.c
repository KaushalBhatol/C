/* 04/15/2021, Kaushal Bhatol.

Q. Give gift to student from there marks.
conditions :
    - passed in maths and science. gift rs 45
    - passed science only. gift rs 15
    - passed maths only. gift rs 18. 

Ans. 
--> Algorithm <--
- define varaiables.
- get marks input from user.
- create wrong input cheacker.
    - marks less then 0.
    - marks greater then 0.
- if statement for both subject passed.
- if statement for science passed.
- if statement for maths passed.
- else for failed from both subjects.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, s;
    // Input From user
    printf("enter marks: \nscience :");
    scanf("%d", &s);
    printf("maths :");
    scanf("%d", &m);
    printf("Entred marks are mathes = %d and science = %d\n", m, s);
    // Output
    if(s>100 | m>100 | s<0 | m<0){
        printf("\nNote: You enterd wrong marks!!!\n\n");
    }
    else if(m&s>=33){
        printf("You passed bothe exams You, get Rs. 45\n");
    }
    else if(s>=33){
        printf("You passed Science exams You, get Rs. 15\n");
    }
    else if(m>=33){
        printf("You passed Maths exams, You get Rs. 18\n");
    }
    else {
        printf("You are not able get any gift\n");
    }

    return 0;
}
