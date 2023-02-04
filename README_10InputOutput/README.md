## Input/Output functions in C programming

### Input and Output

getchar()
putchar()

```
int x;

printf("Insert a character : ");
x = getchar();

printf("YOur resut is : ");
putchar(x);
```

### get and puts

```
char str[100];

printf("Enter some values : ");
gets(str);

printf("\n Your result is : ");
puts(str);
```

### Scanf

```
char str[100];

printf("Enter some values : ");
scanf("%s", str);

printf("\n Your result is %s ", str);
```
