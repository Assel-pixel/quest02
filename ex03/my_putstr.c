#include <unistd.h> 
#include <string.h> 


void my_putstr(char* param_1)
{
    write(1, param_1, strlen(param_1));
}

int main() {
    my_putstr("string\n");
}