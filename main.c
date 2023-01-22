#include <stdio.h>
#include <stdlib.h>

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
