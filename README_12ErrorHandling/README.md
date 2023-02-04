## Error Handling in C programming

### Error Handling

```
int x = 4;
int y = 0;
int result;

if(y == 0){
    fprintf(stderr, "Number cannot be divided by zero... \n");
}

result = x/y;
fprintf(stderr, "The result is : %d \n", result);
```
