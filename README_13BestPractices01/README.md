## Best C Programming Practices for Beginners

### How to accept input from User

```
char name[100];

printf("Please enter your name : ");    scanf("%s", name);

printf("Your name is : %s \n", name);
```

### How to sum 2 integers form user

```
int x, y, result;

printf("Insert an first integer     :   ");    scanf("%d", &x);
printf("Insert an second integer    :   ");   scanf("%d", &y);

result = x + y;
printf("The sum of x and y is : %d \n", result);
```

### How to build a Simple Interest Calculator

```
int amt, rate, time, result;

printf("Insert the Principle Amount     :      ");  scanf("%d", &amt);
printf("Insert the Rate                 :      ");  scanf("%d", &rate);
printf("Insert the Time                 :      ");  scanf("%d", &time);

result = (amt*rate*time)/100;
printf("The simple interest result is   :    %d   ", result);
```

### How to Multiply Float Numbers

```
double num1, num2, result;

printf("Insert a number             :   ");     scanf("%lf", &num1);
printf("Insert another number       :   ");     scanf("%lf", &num2);

result = num1 * num2;
printf("The result of %lf * %lf is :  %.2lf \n", num1, num2, result);

```

### How to Find ASCII value

American Standard Code for Information Interchange

```
char ascii;

printf("Please insert a character   :   ");     scanf("%c", &ascii);

printf("The value of ASCII %c is    :   %d \n", ascii, ascii);
```

### How to get quotient and remainder

```
int num1, num2, remainder, result;

printf("Please insert first number      :   ");     scanf("%d", &num1);
printf("Please insert second number     :   ");     scanf("%d", &num2);

result = num1/num2;
remainder = num1%num2;
printf("The result of the Quotient is   :   %d \n", result);
printf("The result of the Remainder is  :   %d \n", remainder);
```

### How to swap 2 numbers

```
int x, y;

printf("Please insert first number  :   ");     scanf("%d", &x);
printf("Please insert second number :   ");     scanf("%d", &y);

x = x+y;    //4 + 7  = 11
y = x-y;    //11 - 7 = 4
x = x-y;    //11 - 4 = 7

printf("Your final output is        :   %d : %d", x, y);
```

### Alternative method to swap 2 numbers

```
int x, y, z;

printf("Insert first number     : ");   scanf("%d", &x);
printf("Insert second number    : ");   scanf("%d", &y);
printf("Number before swapping  : %d and %d \n", x, y);

z = x;
x = y;
y = z;

printf("Number after swapping   : %d and %d \n", x, y);
```

### How to swap 2 Strings

```
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(){

    char nameone[100], nametwo[100], *output;

    printf("Insert a name : ");         gets(nameone);
    printf("Insert second name : ");    gets(nametwo);

    printf("Names before swapping : %s and %s \n", nameone, nametwo);

    output = (char*)malloc(100);

    strcpy(output, nameone);
    strcpy(nameone, nametwo);
    strcpy(nametwo, output);

    printf("Names after swapping : %s and %s \n", nameone, nametwo);

    return 0;
}
```

### How to add Complex Numbers

```
#include <stdio.h>
#include <stdlib.h>

struct complex_number{
    int real, imag;
};

int main(){

    struct complex_number x1, y1, z1, x2, y2, z2;

    printf("Insert first real number : ");  scanf("%d", &x1.real);
    printf("Insert first imaginary   : ");    scanf("%d", &x2.imag);

    printf("Insert second real number : ");  scanf("%d", &y1.real);
    printf("Insert second imaginary   : ");    scanf("%d", &y2.imag);

    z1.real = x1.real + y1.real;
    z2.imag = x2.imag + y2.imag;

    if(z2.imag >= 0){
        printf("Sum of complex number is : %d + %di \n", z1.real, z2.imag);
    }else{
        printf("Sum of complex number is : %d - %di \n", z1.real, z2.imag);
    }

    return 0;
}
```

### How calculate Sum of digit numbers

```
int x = 0, y, z;

printf("Insert some numbers : ");   scanf("%d", &z);

while(z != 0){
    y = z%10;
    x = x+y;
    z = z/10;
}

printf("The sum is %d", x);
```

### How to create Floyd's Triangle

```
int x = 1, y, z, w;

printf("Choose number of rows to create : ");   scanf("%d", &w);

for(y=1; y<=w; y++){
    for(z=1; z<=y; z++){
        printf("%d", x);
        x++;
    }
    printf("\n");
}
```

### A program to calculate Area of a Circle

```
#include <stdio.h>
#include <stdlib.h>
#define PI 3.142

int main(){

    float area, radius;
    printf("Insert the radius of the circle : ");   scanf("%f", &radius);

    area = PI*radius*radius;
    printf("The are of the circle is : %.2f \n", area);

    return 0;
}
```

### How to calculate Area of a Rectangle

```
int len, bre, area;

printf("Insert the length of the rectangle  : ");    scanf("%d", &len);
printf("Insert the breadth of the rectangle : ");    scanf("%d", &bre);

area = len*bre;
printf("The area of the rectangle is %d ", area);
```

### How to calculate Area of Square

```
int s, area;

printf("Insert the length of the sides  : ");    scanf("%d", &s);

area = s*s;
printf("The area of the rectangle is %d ", area);
```

### How to calculate Area of a Triangle

```
int ht, bs;
float area;

printf("Insert the height  : ");    scanf("%d", &ht);
printf("Insert the base    : ");    scanf("%d", &bs);

area = ht*(0.5*bs);
printf("The area of the rectangle is %.2f ", area);
```

### How to calculate volume of a Cube

```
float s, vol, suf;

printf("Insert the size of the side of a cube  : ");    scanf("%f", &s);

vol = s*s*s;
suf = 6*(s*s);

printf("The volume of Cube is       : %.3f \n", vol);
printf("The surface area of Cube is : %.3f \n", suf);
```

### How to calculate Area of a Cylinder

```
#include <stdio.h>
#include <stdlib.h>
#define PI 3.142

int main(){

    float vol, r, ht;

    printf("Insert the radius  : ");    scanf("%f", &r);
    printf("Insert the height  : ");    scanf("%f", &ht);

    vol = PI*r*r*ht;

    printf("The volume of Cube is       : %.2f \n", vol);
    return 0;
}
```

### How to calculate volume of Sphere

```
#include <stdio.h>
#include <stdlib.h>
#define PI 3.142
#include <math.h>

int main(){

    float r, vol;

    printf("Insert the radius  : ");    scanf("%f", &r);

    if(r >= 1){
        vol = (4/3)*PI*pow(r,3);
        printf("The volume of Sphere is       : %.2f \n", vol);
    }else{
        printf("Invalid value...");
    }

    return 0;
}
```

Run..

```
gcc -o sphere main.c -lm
```

Use

```
./sphere
```

### How to generate Random Numbers

```
int x, y;

printf("Random numbers from 1 - 1000");

for(x=1; x<=10; x++){
    y = rand()%1000 + 1;
    printf("%d\n", y);
}
```

### How to calculate gross salary

```
int x, y, z, gross_sal;

printf("Insert the Basic salary : ");   scanf("%d", &x);

y = (x * 10)/100;
z = (x * 12)/100;

gross_sal = x + y + z;

printf("Gross salary is : %d", gross_sal);
```

### How to calculate percentage

```
float sub1, sub2, sub3, sub4, sub5, sum, percentage;

printf("Enter first mark  : ");  scanf("%f", &sub1);
printf("Enter second mark : ");  scanf("%f", &sub2);
printf("Enter third mark  : ");  scanf("%f", &sub3);
printf("Enter forth mark  : ");  scanf("%f", &sub4);
printf("Enter fifth mark  : ");  scanf("%f", &sub5);

sum = sub1+sub2+sub3+sub4+sub5;

percentage = (sum*100)/500;

printf("The percentage result is : %.2f", percentage);
```

### A program to Shut Down Computer

```
char shut;

printf("Want to shutdown your computer now? (Y/N)");    scanf("%c", &shut);

if(shut == 'y'){
    system("shutdown -P now");
}
```

### A program to get IP Address

```
system("ifconfig");
```

### A program for Date and Time

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    time_t t;
    time(&t);

    printf("Today is : %s ", ctime(&t));

    return 0;
}
```

### How to detect Even and Odd numbers

```
int x;

printf("Insert a number : ");   scanf("%d", &x);

if(x%2 == 0){
    printf("This number %d is an Even number.");
}else{
    printf("This number %d is an odd number");
}
```

### How to detect Vowels and consonants

```
    char C;

    printf("Insert a character : ");    scanf("%c", &C);

    switch(C){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a Vowel. \n", C);
        break;
    default:
        printf("%c is a Consonant. \n", C);
    }
```

### How to detect Greatest of 3 Numbers

```
int x, y, z;

printf("Insert first number : ");       scanf("%d", &x);
printf("Insert second number : ");      scanf("%d", &y);
printf("Insert third number : ");       scanf("%d", &z);

if(x>y && x>z){
    printf("%d is the Greatest Number", x);
}else if(y>z){
    printf("%d is the Greatest Number", y);
}else{
    printf("%d is the Greatest Number", z);
```

### How to find Roots of Quadratic Equation

```
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double r1,r2,r3, determinant, root1, root2, realPart, imaginaryPart;

    printf("Insert first Coefficient of Equation  : ");   scanf("%lf",&r1);
    printf("Insert second Coefficient of Equation : ");   scanf("%lf",&r2);
    printf("Insert third Coefficient of Equation  : ");   scanf("%lf",&r3);

    determinant = r2*r2-4*r1*r3;
    if(determinant>0){
        root1 = (-r2 + sqrt(determinant))/(2*r1);
        root2 = (-r2 - sqrt(determinant))/(2*r1);
        printf("Root1 = %.2lf and Root2 = %.2lf",root1,root2);
    }else if(determinant == 0){
        root1=root2 = -r2/(2*r1);
        printf("Root1 = Root2 = %.2lf",root1);
    }else{
        realPart = -r2/(2*r1);
        imaginaryPart = sqrt(-determinant)/(2*r1);
        printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi \n",realPart,imaginaryPart,realPart,imaginaryPart);
    }

    return 0;
}
```

Run..

```
gcc -o sphere main.c -lm
```

Use

```
./sphere
```

### How to detect a leap Year

```
int yr;

printf("Insert a year to check for Leap Year : ");  scanf("%d", &yr);

if(yr%4 == 0){
    printf("Hurray! %d is a Leap Year...", yr);
}else{
    printf("Oh! %d is not a Leap Year...", yr);
}
```

### How to display Student's Grade

```
    int mark;

    printf("Insert your mark : "); scanf("%d", &mark);

    if(mark < 0 || mark > 100){
        printf("Invalid Mark.");
    }else if(mark <= 100 && mark >= 70){
        printf("Grade A, Excellent!");
    }else if(mark < 70 && mark >= 60){
        printf("Grade B, good!");
    }else if(mark < 60 && mark >= 50){
        printf("Grade C, Weldone!");
    }else if(mark < 50 && mark >= 40){
        printf("Grade D, Pass!");
    }else if(mark < 40 && mark >= 35){
        printf("Grade E, Narrow Escape!");
    }else{
        printf("Grade F, Fail!");
    }
```

### How to Sum a given a Number

```
int x, y, z = 0;

printf("Insert a Positive number = ");  scanf("%d", &x);

for(y=1; y<=x; ++y){
    z += y;
}
printf("Sum is = %d", z);
```

### How to Calculate factorial using function

### How to create Multiplication Table

### How to create Fibonacci Sequence

### How to Reverse Numbers

### How to Reverse Numbers using Array

### How to Reverse String

### How to check Palindrome

### How to create Prime Numbers

### How to Calculate HCF and LCM

### How to detect Armstrong Numbers

### How to generate Armstrong Numbers
