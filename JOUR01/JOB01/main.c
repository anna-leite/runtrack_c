#include <unistd.h>

void my_putchar(char c);
void my_putstr(char *str);


int main()
{
    my_putstr("Hello world!\n");
    return 0;
}