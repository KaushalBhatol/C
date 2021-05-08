/*
    conversion
    - kms to miles
    - inches to foot
    - cms to inches
    - pound to kgs
    - inches to meters
    - celcius to fahrenheit

    Q user select what he want..
    then it gives result..
    then ask again what you want.. 

    Ans.

    formula:
    - km to mile (ktm): 
        mi = km * 0.621371
    - inches to foot(itf): 
        inch = foot/ 12
        inch = foot*0.0833333
    - cms to(cti):
        inch = cm/2.54
            = cm x 0.393701
    - pound to kgs(ptk):
        pound = kg * 0.453592
    
    - inches to meters(itm):
        inch = meter/39.37
            = meter*0.0254
    - celcius to fahrenheit(ctf):
        (c*9/5)+32=f
        (c*1.8)+32=f

*/

#include <stdio.h>
int UsrInputValue();
int text(int n);
void pm1();
void pm2();
void pm3();
void pm4();
void pm5();
void pm6();

int main()
{
main:
    text(0);
    printf("\t Main Menu");
    text(0);

    text(1);
    int n = UsrInputValue();

    if (n > 8 || n < 1) // Invalid input cheack
    {
        text(2);
        goto option;
    }

    printf("You selected option %d\n", n);

    // convertation
    switch (n)
    {
    case 1:
        pm1();
        goto option;
        break;
    case 2:
        pm2();
        goto option;
        break;
    case 3:
        pm3();
        goto option;
        break;
    case 4:
        pm4();
        goto option;
        break;
    case 5:
        pm5();
        goto option;
        break;
    case 6:
        pm6();
        goto option;
        break;
    default:
        goto end;
        break;
    }

option:
    printf("\nmenu(1), exit(2)\n");
    n = UsrInputValue();
    if (n == 1)
    {
        goto main;
    }
    else if (n == 2)
    {
        goto end;
    }
    else
    {
        text(2);
        goto option;
    }

end:
    text(3);
    return 0;
}

int UsrInputValue()
{ //User input
    int n;
    scanf("%d", &n);
    return n;
}

int text(int n)
{ // Texts lines
    switch (n)
    {
    case 0:
        printf("\n");
        for (int i = 0; i < 50; i++)
        {
            printf("-");
        }
        printf("\n");
        break;

    case 1:
        printf("Select which Type of convertation you want.\n");
        printf("1. Kms To Miles.\n");
        printf("2. Inches To Foot.\n");
        printf("3. cms To Inches\n");
        printf("4. Pounds To kgs.\n");
        printf("5. Inches To meter.\n");
        printf("6. Celcius To Farenhit.\n");
        printf("7. For quite\n");
        break;

    case 2:
        printf("\nPlease enter valid value!!\n");
        break;

    case 3:
        printf("\nHappy to help you :)\n\n");
        break;
    
    default:
        break;
    }
}

void pm1()
{
    text(0);
    printf("\t The kms to miles convertion");
    text(0);
    printf("Enter km value: ");
    int n = UsrInputValue();
    printf("Output: %0.2f miles \n", n * 0.621371);
}
void pm2()
{
    text(0);
    printf("\t The Inches to Foot convertion");
    text(0);
    printf("Enter Inches value: ");
    int n = UsrInputValue();
    printf("Output: %0.2f Foot\n", n * 0.0833333);
}
void pm3()
{
    text(0);
    printf("\t The cms to Inches convertion");
    text(0);
    printf("Enter cms value: ");
    int n = UsrInputValue();
    printf("Output: %0.2f Inches\n", n * 0.393701);
}
void pm4()
{
    text(0);
    printf("\t The Pounds to kgs convertion");
    text(0);
    printf("Enter Pounds value: ");
    int n = UsrInputValue();
    printf("Output: %0.2f Kg\n", n * 0.453592);
}
void pm5()
{
    text(0);
    printf("\t The Inches to meter convertion");
    text(0);
    printf("Enter Inches value: ");
    int n = UsrInputValue();
    printf("Output: %0.2f Meter\n", n * 0.0254);
}
void pm6()
{
    text(0);
    printf("\t The celcius to fahrenheit convertion");
    text(0);
    printf("Enter celcius value: ");
    int n = UsrInputValue();
    printf("Output: %0.1f Fahrenheit\n", (n * 1.8) + 32);
}
