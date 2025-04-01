#include <stdio.h>

int char_is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int str_is_digit(char *str)
{
    while (*str){
        int is_digit = char_is_digit(*str);
        if (is_digit == 0) {
            return 0;
        }
        str++;
    }
    return 1;
}




// int str_is_digit(char *str) {
//     while (*str) {
//         if (!char_is_digit(*str)) {
//             return 0;
//         }
//         str++;
//     }
//     return 1;
// }

int main() {
    char *test1 = "1234";
    char *test2 = "12a5";

    printf("Test1 : %s -> %d\n", test1, str_is_digit(test1));
    printf("Test2 : %s -> %d\n", test2, str_is_digit(test2));

    return 0;

}