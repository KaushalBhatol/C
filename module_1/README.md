<!------------------------------ 
  Name: README.md
  Purpose: Module 1 instructions.
  Author: Kaushal Bhatol.
  Date: 2021/08/07 (ISO formate)
-------------------------------->

# Module 1

## index

no | name
---|---------------------------------------------
00 | [Basics of C language](#basics)
01 | [hello world](#hello-world)
02 | [Get value from user](#get-value-from-user)
03 | [Multiple Source File](#multiple-source-file)
04 | [Variables](#variables)
05 | [Operators](#operators)
06 | [Formate Spacifier](#format-specifier)
07 | [Constant](#constant)
08 | [Escape sequence](#escape-sequence)
09 | [If else](#if-else)

## Basics

C language comments :

* single line comment:

```c
// this is single line comment
```

* Multiple line comment:

```c
/* 
This is multiple line comment

You can writ anything hear... compilier just ignore this..
*/
```

Basic rules:

* Every C program requries a **main()** function (Use of more then one **main()** is illegal). The place **main** is where the program execution begins.
* The execution of a function begins at the opening brace of the function and ends at the corresponding closing brance.
* C programs are written in lowercase letters, Howeve, uppercase letters are usec for symbolic names and output strings.
* Every program statement in a C language must end with a semicolon.
* All Variables must be declared for their types before they are used in the program.
* We must make sure to include header files using __#include__ directive when the program refers to special names and functions that it does not degine.

## Basic Structuer Of C language

* The documentation section consists of a seat of comment lines giveing the name of th program, the author and other details, which the programmer would like to use later.
* The definition section defines all symbolic [constants](#constant).
* There are some variables that are used in more than one function. Such variables are called _global_ variables and are declares in the _gloabal_ declariton section that is outside of all the functions. This section alse declares all the user-defined functions.
* Every C program must have one __main()__ function section. This section contains two parts, declaration part and executable part. The declaration part declares all the variables used in the executable part. There is at least one statement in the executable part. These two parts must appear between the opening and the closing brance and ends at the closing brance. The closing brace of the main function section is the logical end of the program. All statements in the declaration and executable parts end with a semicolon(;).

![C language basic structure][c_basic_structure]

### Compiling and Linking

GCC Compiler:

* One of the most popular C compiler is the __GCC__ compiler. which is supplied with Linux but is abailable for many other platforms are well. Using this compiler is similar to using the treditional __UNIX cc__ compiler.

Compiling:

* Let us assume that the source program has been created in a file named kaushal.c. Now the program is ready for compilation.
* The compilation command to achieve this task under UNIX is: `cc kaushal.c`
* The source program instruction are now translated into a form that is suitable for execution by the computer. The translation is done after examining each instruction for its correctness. If every thing is alright, the compileation proceeds silently and the translated program is stored on another file with the name kaushal.o. This program is knowan as object code.

Linking:

* Linking is the process of putting together other program files and functions that are requierd by the program.
* For example, if the program is using __exp()__ function, then the object code of this function should be brought from the __math library__ of the system and linked to the main program.
* Under UNIX, The linking is automatically done when the __cc__ command is used.
* The compiled and linked program is called the _executable_ object code and is stored automatically in another file named `a.out`.
* Note windows genrate `a.exe` insted of `a.out`, both work same.
* Note that the linker always assigns the same name __a.out__. When we compile another program, this file will be overwritten by the executable object code of the mew program.
* If we want to prevent from happening, we should rename the file immediatelly by using the command.
  * `mv a.out name`
* we may also achieve this by spacifying an option in the cc command as follows:
  * `gcc -o name filename.c`
* This will store the executable object code in the file name and prevernt the old file `a.out` from being destroyed.

> Q&A

* __Q: What does GCC stand for?__
  * A: GCC originally stood for "GNU C Compiler". It now stand for "GNU Compiler Collection." because the current version of GCC compiles program written in a variety of languages. including Ada, C, C++, Fortran, Java, and objective-C.
* __Q: What's the big deal about GCC, anyway?__
  * A: GCC is significiant for many reasons.

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

## Multiple Source File

* To compile and link multiple source program files, we must append all the files name to the __cc__ command.

```bash
cc filename-1.c ... filename-n.c
```

* This file will be seprately compiled into object file called `filename-i.o` and then linked to produce and executable program file __a.out__.
* It is also possible to compile each file seprately and link them later. For example, the commands

```bash
cc -c mod1.c
cc -c mod2.c
```

* Will compile the source files _mod1.c_ and _mod2.c_ objects files _mod1.o_ and _mod2.o_. They can be linked together by the command

```bash
cc mod1.o mod2.o
```

* we may also combine the source files and object file as follows:

```bash
cc mod1.c mod2.o
```

* Only mod1.c is compiled and then linked with the object file mod2.o. This approch is useful whenn one of the multiple source files need to be changed and recompiled or an alrady existing object files is to be used along with the program to be compiled.

Exp:

* We need to creat two c files, main.c and multipli.c

main.c:

```c
#include <stdio.h>
int multiplication();

int main(int argc, char const *argv[])
{
    int x;
    printf("enter the value for multiplication: ");
    scanf("%d", &x);
    multiplication(x);
    return 0;
}
```

multipli.c:

```c
#include <stdio.h>
#define MAX 10

int multiplication(int x)
{
    int i = 1;
    while (i <= MAX)
    {
        printf("%3d x %2d = %5d \n", x, i, x*i);
        i++;
    }
}
```

* Now we compile both using following command:

```bash
cc main.c multipli.c
```

* compile and linking procces give as single exicutable file __a.out__ which is combo of both c files.

> Attachments 📎

* [Multiple_Source_File/main.c](Multiple_Source_File/main.c)
* [Multiple_Source_File/multipli.c](Multiple_Source_File/multipli.c)

## Variables

A variable is a name of the memory location. It is used to store data. Its value can be changed, and it can be reused many times.

It is a way to represent memory location through symbol so that it can be easily identified.

The example of declaring the variable is given below:

```c
int a;  
float b;  
char c; 

// assigning values method 1
// first declare then assign
int a;
a = 44;
// method 2
// declare and asign at same time
int a = 44;
float b = 43.33;
float c = 48.44f; // only float support f after value, This helps to know this is flot value.
                  // output are always same with or without f.
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
----------|---------------
`+`       | Addition
`-`       | Subtraction
`*`       | Multiplication
`/`       | Division
`%`       | modules

### Relation operator

Operators|Description
---------|-----------------------
==       | Is equal to
!=       | Is not equal to
&#62;    | Greater than
&#60;    | Less than
&#62;=   | Greater than
<=       | Less than or equal to

>Note: mostly this operators are used in if, else statement.

### Logical operator

Operators | Description                                                                                          | Example
----------|------------------------------------------------------------------------------------------------------|----------
&&        | Logical “AND” operator, both the operands are non-zero then condition is true.                       |a&&b
&#8741;   | Logical “OR” operator, if any of these two operands is none-zero, Then condition become true.        |a&#8741;b
!         | Logical “NOT” operator, It is used to reverse the logical state of its operand, if condition is true.|!a

### Bit wise operators

* Bit-wise operator are functioning on bit.

Value A | Value B | A&B | A&#8739;B | A^B
--------|---------|-----|-----------|----
0       |0        |0    |0          |0
0       |1        |0    |1          |1
1       |1        |1    |1          |0
1       |0        |0    |1          |1

* XOR operator: If one value is true and second one is false, Then XOR give true value.
* other Bit wise operator
  * ~ is the binary one's complement operator
  * << is the binary left shift operator
  * &#62;&#62; is the binary right shift operator

### Assignment operators

Operators | Description
----------|---------------------------------------------------------------------------------------------------------------------------------
&#61;     | Simple assignment operator assign value from right side operands
+&#61;    | Add AND assignment operator. It’s adds the right operand to the left operands and assign the result to the left operands
-&#61;    | Subtract AND assignment operator. It subtracts the right operands from the left to the result is assignment to the left operand.
*&#61;    | Multiply AND assignment operator. It multiples the right operands from the left to the result is assignment to the left operand.
/&#61;    | Divide AND assignment operator. It divide the right operands from the left to the result is assignment to the left operand.

### Miscellaneous

Operators | Description                      | Example
----------|----------------------------------|-----------------------------------------------------------------------------
sizeof()  | Returns the size of variable.    | sizeof(a), where a is an integer, will return in's size on that architachure.
&         | Returns the address of variable. | &a; return the actual address of the variable.
`*`       | Pointer variable                 | `*a;`
?:        | Conditonal expression            | if condition is true, The value X; Otherwise value Y

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
-------|-----------------
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

The __#define__ Directive:

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

Example:

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\t Horizontal tab\n");
    return 0;
}
```

## If else

* The if statement allows a progarm to choose between two alternatives by testing the value of an expressin.
* There is 4 methods for writng if else.
  1. [if statement](#if-statement)
  2. [if else statement](#if-else-statement)
  3. [Cascaded if](#cascaded-if)
  4. [Nested if else](#nested-if-else)

![Decison Making][if-else-decision-making]

### if Statement

* If statement is the most simple decision making statement. It is used to decide whether a
certain statement or block of statements will be executed or not. If a certain condition is
true then a block of statement is executed otherwise not.

Exp:

```c
if(i == 5)
{
  printf("You entered 5 as value");
}
```

* 📄 [if statement.c](11_if.c)

Flow Chart:

![If statement flow chart][if-statement]

* Here, condition after evaluation will be either true or
false. C if statement accepts Boolean values – if the
value is true then it will execute the block of statements
below it otherwise not. If we do not provide the curly
braces `‘{‘` and `‘}’` after if(condition) then by default if
statement will consider the first immediately below
statement to be inside its block.

### if else statement

* The if statement alone tells us that if a condition is true it will execute a block of
statements and if the condition is false it won’t. But what if we want to do something else if
the condition is false. Here comes the C else statement. We can use the else statement
with if statement to execute a block of code when the condition is false.

Exp:

```c
if (i<j)
{
  max = j;
}
else
{
  max = i;
}
```

* 📄 [if else statement.c](11_if_else.c)

Flow Chart:

![If else statement flow chart][if-else-statement]

### Cascaded if

* The C if statements are executed from
the top down. As soon as one of the
conditions controlling the if is true, the
statement associated with that if is
executed, and the rest of the C else-if
ladder is bypassed. If none of the
conditions are true, then the final else
statement will be executed.

Exp:

```c
if (n<0) {
  printf("n is less than 0\n");
}
else if (n ==0 ){
    printf("n is equalt to 0\n");
  }
else {
  printf("n is greater than 0\n");
}
```

* 📄 [cascaded if.c](11_if_cascaded.c)

Flow Chart:

![else if cascaded][if-else-cascaded]

### Nested if else

* A nested if in C is an if statement that is the target of another if statement. Nested if
statements means an if statement inside another if statement. Yes, both C and C++ allows
us to nested if statements within if statements, i.e., we can place an if statement inside
another if statement.

Exp:

```c
if (i > j){
    if(i > k){
      max = i;
    }
    else{
      max = k;
    }
}
else
  if( j > k){
    max = j;
  }
  else {
    max = k;
  }
```

* 📄 [Nested if else.c](11_if_else_nested.c)

Flow Chart:

![else if nested][if-else-nested]

<!-- images -->
[c_basic_structure]: ../assets/images/1.0.png
[c_operators_precedence]: ../assets/images/1.1.png
[escape_sequence]: ../assets/images/1.2.png
[if-else-decision-making]: ../assets/images/1.3.png
[if-statement]: ../assets/images/1.4.png
[if-else-statement]: ../assets/images/1.5.png
[if-else-cascaded]: ../assets/images/1.6.png
[if-else-nested]: ../assets/images/1.7.png
