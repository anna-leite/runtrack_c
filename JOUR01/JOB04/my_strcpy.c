#include <stdio.h>

char *my_strcpy(char*dest, const char*src)
{
    while(*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return dest;
}

int main(){
    const char *test_scr = "Hello";
    char test_dest[50];

    my_strcpy(test_dest, test_scr);

    printf("Source : %s\n", test_scr);
    printf("Destination : %s\n", test_dest);

    return 0;
}