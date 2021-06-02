# Week 1

## index

no | name
---|-----------------------
0  | [Basics of C language](#basics)
01 | [hello world](#hello-world)
02 | [Get value from user](#get-value-from-user)

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
* C language comments represent with `// comment`
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

> attachments 📎

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

> attachments 📎

* [03_get_value_a_and_b.c](03_get_value_a_and_b.c)
* [04_get_value_and_calculate.c](04_get_value_and_calculate.c)
