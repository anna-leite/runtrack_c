#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    char test = '5';

    if (char_is_digit(test)) {
        printf("%c est un chiffre.\n", test);
    } else {
        printf("%c n'est pas un chiffre.\n", test);
    }

    return 0;
}



// int char_is_digit(char c)
// {
//     return (c >= '0' && c <= '9');
// }
