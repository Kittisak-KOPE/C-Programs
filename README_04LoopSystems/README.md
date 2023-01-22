## Loop systems in C programming

### while loop

```
int x = 5;

while(x <= 10){
    printf("The value of x is %d \n", x);
    x++;
}
```

### for loop

```
for(int x=5; x<10; x++){
    printf("The value of x is %d \n", x);
}
```

### do while loop

```
int x = 5;

do{
    printf("This is the value of x %d \n", x);
    x = x+1;
}while(x <= 10);
```

### Prime Numbers

```
int x, y;

for(x=2; x<50; x++){
    for(y=2; y<=(x/y); y++){
        if(!(x%y))
            break;
    }
    if(y > (x/y)){
        printf("%d is a prime number \n", x);
    }
}
```

### Break Statement

```
int x = 10;

while(x < 50){
    printf("This number is %d \n", x);
    x++;

    if(x > 20){
        break;
    }
}
```

### Continue Statement

```
int x = 1;

while(x <= 10){
    if(x >= 5 && x <=7){
        x++;
        continue;
    }
    printf("This number is %d \n", x);
    x++;
}
```

### Infinite loop

```
for(;;){
    printf("This is an infinite loop system \n");
}
```
