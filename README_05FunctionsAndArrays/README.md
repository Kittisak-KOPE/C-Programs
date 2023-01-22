## Functions and Arrays in C programming

### Functions

```
#include <stdio.h>
#include <stdlib.h>

int max(num1, num2){
    int output;
    if(num1 > num2)
        output = num1;
    else
        output = num2;
    return output;
}

int main()
{
    int x = 500;
    int y = 70;
    int out;

    out = max(x, y);

    printf("The maximum number is %d \n", out);

    return 0;
}
```

### Arrays

```
int x;
int y;
int z[6];

for(x = 0; x <= 5; x++){
    z[x] = x + 10;
    // printf("%d \n", z[x]);
}
for(y = 0; y <= 5; y++){
    printf("Index [%d] = %d \n", y, z[y]);
}
```

### Average Numbers

```
double myave(int nums[], int len){
    int x;
    double average, total;

    for(x=0; x<len; ++x){
        total += nums[x];
    }
    return average = total/len;
}

int main()
{
    int numbers[6] = {45, 67, 12, 8, 9, 3};
    double result;

    result = myave(numbers, 6);
    printf("The average of the array is %.2f \n", result);

    return 0;
}
```
