#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int b = 3;

    printf("Avant échange : a = %d, b= %d\n", a, b);

    swap(&a, &b);

    printf("Après l'échange : a = %d, b= %d\n", a, b);

    return 0;
}