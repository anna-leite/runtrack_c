#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void divide(int *val){
    if(val!=NULL){
        *val = *val/2;
    }
}

int main(){
    int number = 10;
    printf("Before divide:%d\n", number);

    divide(&number);

    printf("After divide : %d\n", number);

    return 0;
}