## String in C programming

### Strings

```
char display[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

printf("Your first project in C is %s \n", display);
```

### String Functions

strcpy
strcat
strlen
strcmp
strchr
strstr

```
char str1[] = "Firstname ";
char str2[] = "Lastname";
char str3[] = " ";
int len;

// strcpy(str1, str2);
// printf("The result of strcpy is %s \n", str1);

strcat(str1, str2);
printf("The result of strcat is %s \n", str1);

len = strlen(str1);
printf("The length of str is %d \n", len);
```
