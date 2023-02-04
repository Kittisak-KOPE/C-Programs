#include <stdio.h>
#include <stdlib.h>

int main(){

    char shut;

    printf("Want to shutdown your computer now? (Y/N)");    scanf("%c", &shut);

    if(shut == 'y'){
        system("shutdown -P now");
    }
    return 0;
}
