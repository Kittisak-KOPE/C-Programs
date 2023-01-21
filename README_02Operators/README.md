## Operators in C programming

### Arthmetic Operators

```
int x = 10;
int z ;

// ++x, x++, --x, x--
z = ++x;
printf("The result of Z is %d \n", z);
```

### Relational Operators

```
// ==, !=, >, <, >=, <=
for(x=0; x<=6; x++){
    printf("The value of x is %d \n", x);
}
```

### Logical Operators

```
int x = 10;
int y = 20;

// &&, ||, !
if(!(x == 10 || y == 30)){
    printf("This is true");
}else{
    printf("This is false");
}
```

### Bitwise Operator

```
int x = 10;
int y = 20;
int z ;

// 10 = 0000 1010
// 20 = 0001 0100
// &, |
z = x | y;
printf("The result of z is %d \n", z);
```
