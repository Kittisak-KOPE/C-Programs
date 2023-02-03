## Structures in C programming

### Structures

```
#include <stdio.h>
#include <stdlib.h>

struct company{
    char name[100];
    char occupation[100];
    char company_name[100];
    int age;
    int salary;
};

int main(){

    struct company employee;

    strcpy(employee.name, "Peter");
    strcpy(employee.occupation, "Programmer");
    strcpy(employee.company_name, "Gstevewall");
    employee.age = 24;
    employee.salary = 1000;

    printf("The name of employee is %s \n", employee.name);
    printf("The occupation of employee is %s \n", employee.occupation);
    printf("The name of employee'company is %s \n", employee.company_name);
    printf("The age of employee is %d \n", employee.age);
    printf("The salary of employee is %d \n", employee.salary);

    return 0;
}
```

### Pointers to Structures

```
#include <stdio.h>
#include <stdlib.h>

struct company{
    char name[30];
    char job[30];
    char car[30];
    int salary;
};

void printcompanys( struct company *employee);

int main(){

    struct company Employee;

    strcpy(Employee.name, "Peter Paul");
    strcpy(Employee.job, "Programmer");
    strcpy(Employee.car, "Honda");
    Employee.salary = 10000;

    printcompanys(&Employee);

    return 0;
}

void printcompanys( struct company *employee){
    printf("Employee name : %s \n", employee->name);
    printf("Employee job : %s \n", employee->job);
    printf("Employee car : %s \n", employee->car);
    printf("Employee salary : %d \n", employee->salary);
}
```
