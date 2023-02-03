## Union and Typedef in C programming

### Union

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Set{
    int x;
    float y;
    char str[10];
};

int main(){

    union Set type;

    type.x = 10;
    type.y = 2.5;
    strcpy( type.str, "Hello");

    printf("type.x is %d \n", type.x);
    printf("type.y is %f \n", type.y);
    printf("type.str is %s \n", type.str);

    return 0;
}
```

### Typedef

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct company{
    char name[20];
    char job[20];
    char car[20];
    int salary;
}Comp;

int main(){

    Comp employee;

    strcpy(employee.name, "Peter Paul");
    strcpy(employee.job, "Programmar");
    strcpy(employee.car, "Henda");
    employee.salary = 1000;

    printf("Employee name is %s \n", employee.name);
    printf("Employee job is %s \n", employee.job);
    printf("Employee car is %s \n", employee.car);
    printf("Employee salary is %d \n", employee.salary);

    return 0;
}
```

### define

```
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(){

    printf("The value of TRUE is %d \n", TRUE);
    printf("The value of FALSE is %d \n", FALSE);

    return 0;
}
```
