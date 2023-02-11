## Cr. prasertcbs

### gcd && Euclidean algorithm

```
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    int cnt = 0;                                        //compair
    int min = a < b ? a:b;
    for(int i=min; i>=1; i--){
        cnt++;                                          //comair
        if(a % i == 0 && b % i == 0){
            printf("counter(simple) = %d\n", cnt);      //compair
            return i;
        }
    }
}

int gcdEuclid(int a, int b){
    int cnt = 0;                                        //compair
    int t;
    while(b != 0){
        cnt++;                                          //compair
        t = b;
        b = a % b;
        a = t;
    }
    printf("counter(simple) = %d\n", cnt);              //compair
    return a;
}

int main(){

    int a = 9;
    int b = 21;

    printf("gcd(%d, %d) = %d \n", a, b, gcd(a, b));
    printf("gcd(%d, %d) = %d \n", a, b, gcdEuclid(a, b));

    return 0;
}

```

### Babylonian method

```
#include <stdio.h>
#include <stdlib.h>

double sqroot(double s){
    //double x0 = s / 2.0;
    double x0 = 600;
    double x1 = 0.0;
    double precision = .0001;
    double delta = 1;

    while(delta > precision){
        x1 = .5 * (x0 + s / x0);
        delta = fabs(x1 - x0);
        printf("x0 = %.7f, x1 = %.7f, delta = %.7f  \n", x0, x1, delta);
        x0 = x1;
    }
    return x1;
}

int main(){

    double s = 125348;
    double x = sqroot(s);

    printf("x = %.7f, x * x = %.7f \n", x, x * x);

    return 0;
}

```
