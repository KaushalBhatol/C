# Week 1

## index

no | name
---|-----------------------
00 | [Basics of C language](#basics)
01 | [hello world](#hello-world)
02 | [Get value from user](#get-value-from-user)
03 | [Variables](#variables)
04 | [Operators](#operators)
05 | [Formate Spacifier](#format-specifier)
06 | [Constant](#constant)
07 | [Escape sequence](#escape-sequence)

## Basics

### C language basic structure

```c
#include <stdio.h> 
// header files section

int main(){
    // main code section
    return 0;
}
```

* C language header files are give you hands for your code.
* C language comments :
  * single line comment: `// this is single line comment`
  * multiple line comment: `/* this is multiple line comment */`
* `return 0` always needed for exit the program.

### Compile and run

>C language is compiled by gcc, for compileng c language you need to wrote followein commands in terminal

1. go to your coded c languge directory
2. write `gcc file-name.c`
3. write `./a.out` for linux or `./a.exe` for windows

## Hello World

### printf

* This file as a startup for entering in c language
* creating first file using .c extanstion

```c
#include <stdio.h>

int main()
{
    printf("hello world\n");
    return 0;
}
```

* printf is used for printing text and outputs.

### Basic calculation with c

```c
int a, b;
a = 34;
b = 6;
printf("a - b = %d\n", a-b);
printf("a + b = %d\n", a+b);
printf("a * b = %d\n", a*b);
printf("a / b = %d\n", a/b);
```

* try with yourself by changing a and b values
* above code must in `int main(){ // code section}`

> Exercise with answer 🔬

* [Write a C program to calculate area of a rectangle](Exercise/01.Calculate%20area%20of%20a%20rectangle.c)

> Attachments 📎

* [01_hello_world.c](01_hello_world.c)
* [02_calculat_value_with_value.c](02_calculat_value_with_value.c)

## Get value from user

* For gatting value from user we use scanf from stdio.h library.
* Scanf creat so simple to get value from user.
* For gatting value from user use below steps
  1. define a variable
  2. use scanf command
  3. use printf command for showing result.

```c
#include<stdio.h>

int main()
{
    int a; // define a
    printf("Enter first Value\n");
    scanf("%d", &a); // get value from user
    printf("Our value of a is %d", a); // output
    return 0;
}
```

> Exercise with answer 🔬

* [Multiplication table](Exercise/03%20Multiplication%20table.c)

> Attachments 📎

* [03_get_value_a_and_b.c](03_get_value_a_and_b.c)
* [04_get_value_and_calculate.c](04_get_value_and_calculate.c)

## Variables

A variable is a name of the memory location. It is used to store data. Its value can be changed, and it can be reused many times.

It is a way to represent memory location through symbol so that it can be easily identified.

The example of declaring the variable is given below:

```c
int a;  
float b;  
char c;  
```

Hear, a, b, c are variables. The int, float, char are the data types.

### Rules for defining variables

* A variable can have alphabets, digits, and underscore.
* A variable name can start with the alphabet, and underscore only. It can't start with a digit.
* No whitespace is allowed within the variable name.
* A variable name must not be any reserved word or keyword, e.g. int, float, etc.

### Types of Variables in C

1. local variable
2. global variable
3. static variable
4. automatic variable
5. external variable

### External variable

We can share a variable in multiple C source files by using an external variable. To declare an external variable, you need to use extern keyword.

ex:

`myfile.h`

```c
extern int x=10;//external variable (also global)  
```

`program1.c`

```c
#include "myfile.h"  
#include <stdio.h>  
void printValue(){  
    printf("Global variable: %d", global_variable);  
}  
```

> Attachments 📎

* [05_float.c](05_float.c)
* [06_char.c](06_char.c)
* [07_external_variable.c](07_external_variable.c)

## Operators

An Operators is a symbol used to perform operations in given programming language.

### Types of operators

1. [Arithmetic operators](#arithmetic-operators)
2. [Relation Operators](#relation-operator)
3. [Logical Operators](#logical-operator)
4. [Bit wise operators](#bit-wise-operators)
5. [Assignment operators](#assignment-operators)
6. [Miscellaneous](#miscellaneous)

### Arithmetic operators

* This operators are basic operators for day to day life.

Operators | Description
----------|-----------
+| Addition
-| Subtraction
*| Multiplication
/| Division
%| modules

### Relation operator

Operators|Description
---------|-----------
==| Is equal to
!=| Is not equal to
&#62;| Greater than
&#60;| Less than
&#62;=| Greater than
<=|Less than or equal to

>Note: mostly this operators are used in if, else statement.

### Logical operator

Operators | Description | Example
----------|-------------|--------
&&| Logical “AND” operator, both the operands are non-zero then condition is true.|a&&b
&#8741;|Logical “OR” operator, if any of these two operands is none-zero, Then condition become true.|a&#8741;b
! |Logical “NOT” operator, It is used to reverse the logical state of its operand, if condition is true..|!a

### Bit wise operators

* Bit-wise operator are functioning on bit.

Value A | Value B | A&B | A&#8739;B | A^B
--------|---------|-----|-----------|----
0|0|0|0|0
0|1|0|1|1
1|1|1|1|0
1|0|0|1|1

* XOR operator: If one value is true and second one is false, Then XOR give true value.
* other Bit wise operator
  * ~ is the binary one's complement operator
  * << is the binary left shift operator
  * &#62;&#62; is the binary right shift operator

### Assignment operators

Operators | Description
----------|------------
&#61;| Simple assignment operator assign value from right side operands
+&#61; | Add AND assignment operator. It’s adds the right operand to the left operands and assign the result to the left operands
-&#61; | Subtract AND assignment operator. It subtracts the right operands from the left to the result is assignment to the left operand.
*&#61; | Multiply AND assignment operator. It multiples the right operands from the left to the result is assignment to the left operand.
/&#61; | Divide AND assignment operator. It divide the right operands from the left to the result is assignment to the left operand.

### Miscellaneous

Operators | Description | Example
----------|-------------|--------
sizeof() | Returns the size of variable. | sizeof(a), where a is an integer, will return in's size on that architachure.
& | Returns the address of variable. | &a; return the actual address of the variable.
`*` | Pointer variable | `*a;`
?: | Conditonal expression | if condition is true, The value X; Otherwise value Y

### Operators PRECEDENCE IN C

![c operators precedence][c_operators_precedence]

> Attachments 📎

* [08.1 Oprators Arthmetic and relation.c](08.1_Oprators_Arthmetic_and_relation.c)
* [08.2 Oprators logical and Bitwise.c](08.2_OpratorsLogicalAndBitwise.c)

## Format Specifier

* The Format specifier is a string used in the formatted input and output functions. The format string determines the format of the input and output. The format string always starts with a '%' character.
* `Pritf(“This is a good boy %a.bf”, var); ` Will print var with b decimale in a “a” character space
* ex : 'printf("%5.2f", a);`
  * prints out the value of amount in floating point format. The format spaciefication __%5.2f__ tells the compiler that the output must be in floating point, With five places in all and two places to the right of the decimal point.

format | work
-------|------
%c     | character print
%d     | integer print
%f     | float print
%l     | long print
%lf    | double print
%LF    | long double print

> Attachments 📎

* [09 FormatSpacifier.c](09_FormatSpacifier.c)

## Constant

* A constant is a value or variable that can’t be changed in the program.
  * Example: 15, ‘a’, 3.4, “Name, etc..
* There are Two ways to define constant in C Program.
  1. Constant Keyword: `const float b = 7.499;`
  2. `#define` preprocessor: `#define PI 3.14`

The #define Directive:

* A __#define__ instruction defines value to a _symbolic constant_ for use in the program. Whenever a symbolic name is encountered, the compiler substitutes the value associated with the name automatically. To change the value, we have to simply change the definition.
* A __#define__ is a preprocessor compiler directive and not a statement. Therfore __#define__ lines should not end with a semicolon.
* __#define__ instrucions are usually placed at the beginnig before the __main()__ function.

> Attachments 📎

* [10 constant.c](10_constant.c)

## Escape sequence

* An escape sequence inn C programming, language is a sequence of characters.
* It doesn’t represent itself when used inside string literal or character.
* It is composed of two or more characters string with backslash `\`.

![escap sequance box][escape_sequence]

<!-- images -->
[c_operators_precedence]: ../assets/images/1.1.png
[escape_sequence]: ../assets/images/1.2.png
