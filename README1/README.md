## Getting started with C programming

### Preprocessor Directives

```
#include <stdio.h>      //----- Preprocessor
#include <stdlib.h>     //----- Preprocessor

int main(){
    printf("Welcome EjikeProject!\n");
    return 0;
}
```

### Basic Syntax of C programming

```
printf("Welcome EjikeProject!\n");
```

### Special Characters

%s = String ""
%d = integer
%f = float

```
printf("This is %s and he is the instructor of %s \n", "Kjeke", "C language");

printf("This is %d \n", "80");

printf("This is %d \n", 80);

printf("This is %f \n", 98.7654321);
printf("This is %.4f \n", 98.7654321);
```

### Variables

```
#define str "This is s the string variable"

...

int age = 20;
int month = 5;
int year = 2001;
int day = 12;
int hello;
hello = year - age;
char Fjike = 'A';

printf("The value of age is %d and the today is %d \n", age, day);
printf("The result of hello is %d \n", hello);
printf("The new variable is %s", str);
```

### Local Variables

```
int x;
int y;
int z;

x = 10;
y = 5;

z = x + y;
printf("The result of z is %d \n", z);
```

### Global Variable

```
int x = 10;
int y;
int z;

int main(){
    x = 14;
    y = 5;

    z = x + y;
    printf("The result of z is %d \n", z);

    return 0;
}
```

### Arrays

```
char me[20] = "Ejike IfeanyiChukwu";

printf("The data value is %s \n", me);

me[0] = 'G';

printf("The data value is %s \n", me);

strcpy(me, "Hello World");

printf("The new value is %s \n", me);
```

### Custom Header Files

Create a file name "HeaderOne.h"

```
#define NAME "This is my custom header file"
#define STUDENTS 20
```

main.c

```
#include <stdio.h>
#include <stdlib.h>
#include "HeaderOne.h"

int main(){
    int school;
    school = STUDENTS + 30;

    printf("Hello %s \n", NAME);
    printf("Total number of students is %d \n", school);
    return 0;
}
```

### User Input

```
char firstname[20];
char lastname[20];
int age;
int salary;

printf("What is your firstname ?");      scanf("%s", firstname);

printf("What is your lastname ?");       scanf("%s", lastname);

printf("How old are you ?");             scanf("%d", &age);

printf("How much is you salary ?");      scanf("%d", &salary);

printf("\n %s %s is %d years old and his salary is %d \n", firstname, lastname, age, salary);
```

### Math Operators

```
int x;
int y;
int z;

x = 4;
y = 5;
z = x + y;
// +, -, *, /, %

printf("The result of z is :  %d \n", z);
```

### Calculate inputs from user

```
float x;
float y;
float z;

printf("Insert first number : ");       scanf("%f", &x);

printf("Insert first number : ");       scanf("%f", &y);

z = x * y;
printf("The result of your numbers is :  %.1f \n", z);
```

### Typecasting

```
int x = 12;
int y = 10;
int z = 25;
float result;

result = ((float)x * (float)y) / (float)z;
printf("The result is %.2f", result);
```
