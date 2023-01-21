#include <stdio.h>
#include <stdlib.h>
#include "HeaderOne.h"

int main()
{
    int x = 12;
    int y = 10;
    int z = 25;
    float result;

    result = ((float)x * (float)y) / (float)z;
    printf("The result is %.2f", result);

    return 0;
}
