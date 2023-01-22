## Decision Making Statements in C programming

### if Statement

```
int x = 9;
int y = 5;

if(x==9 && y==5){
    printf("This statement is true");
}
```

### if else Statement

```
int x = 9;
int y = 5;
int z ;

if(x + y == 140){
    printf("This statement is true");
}else{
    printf("This is not the true result");
}
```

### else if Statement

```
int x = 10;

if(x == 9){
    printf("The value of x is 9");
}else if(x == 10){
    printf("You are on condition one");
}else if(x == 20){
    printf("You are on condition two");
}else if(x == 30){
    printf("You are on condition three");
}else if(x == 40){
    printf("You are on condition four");
}else{
    printf("You are on no condition");
}
```

### Nested if Statement

```
int x = 10;
int y = 7;

if(x == 10){
    if(y == 7){
        printf("This is a nested if statement");
    }else{
        printf("You failed the condition");
    }
}
```

### Switch statement

```
char level = '8';

switch(level){
case '1':
    printf("You are a fresh student \n");
    break;
case '2':
    printf("You are a 200 level student \n");
    break;
case '3':
    printf("You are a 300 level student \n");
    break;
case '4':
    printf("You are a 400 level student \n");
    break;
default:
    printf("You are a not a student \n");
    break;
}
printf("You level is %c00 \n", level);
```

### Nested switch Statement

```
int x = 5;
int y = 4;

switch(x){
case 5:
    printf("This is case x \n");
    switch(y){
    case 4:
        printf("This is case y \n");
    }
}
```
