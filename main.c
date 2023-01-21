#include <stdio.h>
#include <stdlib.h>
#include "HeaderOne.h"

int main()
{
    char firstname[20];
    char lastname[20];
    int age;
    int salary;

    printf("What is your firstname ?");      scanf("%s", firstname);

    printf("What is your lastname ?");       scanf("%s", lastname);

    printf("How old are you ?");             scanf("%d", &age);

    printf("How much is you salary ?");      scanf("%d", &salary);

    printf("\n %s %s is %d years old and his salary is %d \n", firstname, lastname, age, salary);

    return 0;
}
