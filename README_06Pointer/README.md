## Pointers in C programming

### Pointer

```
int xyz = 10;
int *pt;

pt = &xyz;

printf("The address of variable xyz is %x \n", &xyz);

printf("The address of variable xyz is %x \n", pt);

printf("The address of variable pt is %d \n", *pt);
```

### Null Pointer

```
int *pt = NULL;
int xyz = 4;

pt = &xyz;

printf("The address of *pt is %x \n", pt);
```

### Pointer Increment

```
int xyz[] = {12, 13, 14, 15, 16};
int *pt, w;

pt = xyz;

for(w = 0; w < 5; w++){
    printf("The address of xyz [%d] = %x \n", w, pt);
    printf("The result of xyz [%d] = %d \n", w, *pt);

    pt++;
}
```

### Pointer Decrement

```
int xyz[] = {12, 13, 14, 15, 16};
int *pt, w;

pt = &xyz[5-1];

for(w = 5; w > 0; w--){
    printf("The address of xyz [%d] = %x \n", w, pt);
    printf("The result of xyz [%d] = %d \n", w, *pt);

    pt--;
}
```

### String Variables in Array

```
char *details[] = {"Hello", "Ejike", "Peter", "Steve", "Paul"};
int x = 0;

for(x = 0; x < 5; x++){
    printf("The name of details[%d] = %s \n", x, details[x]);
}
```

### Pointers to Pointers

```
int xyz, *pt1, **pt2;
xyz = 10;

pt1 = &xyz;

pt2 = &pt1;

printf("The value of xyz = %d \n", xyz);
printf("The value of *pt1 = %d \n", *pt1);
printf("The value of *pt2 = %d \n", **pt2);
```

### Pass functions to pointer

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void timegenerator(unsigned long *pt){
    *pt = time(NULL);
    return;
}

int main(){
    unsigned long seconds;

    timegenerator(&seconds);

    printf("Time generator in seconds is %ld \n", seconds);

    return 0;
}
```

### Random number generator

```
#include <stdio.h>
#include <stdlib.h>

int * randomgenerator(){
    static int ran[5];
    int x;

    srand((unsigned)time(NULL));
    for(x = 0; x < 5; ++x){
        ran[x] = rand();
        printf("The value of the number is %d \n", ran[x]);
    }
    return ran;
}

int main(){
    int x;
    int *pt;

    pt = randomgenerator();

    return 0;
}
```

### Return Random numbers

```
#include <stdio.h>
#include <stdlib.h>

int * randomgenerator(){
    static int ran[5];
    int x;

    srand((unsigned)time(NULL));
    for(x = 0; x < 5; ++x){
        ran[x] = rand();
        printf("The value of the number is %d \n", ran[x]);
    }
    return ran;
}

int main(){
    int x;
    int *pt;

    pt = randomgenerator();

    for(x = 0; x < 5; x++){
        printf("The returned values of [%d] is %d \n", x, *(pt + x));
    }

    return 0;
}
```
