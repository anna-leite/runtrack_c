
int my_strlen(char *str)
{
    int size = 0;
    while(*str){
        size += 1;
        str++;
    }
    return size;
}

int main()
{
    my_strlen("Hello");
    return 0;
}