
void my_swap(int* param_1, int* param_2)
{   
    int val=0;

    val = *param_1;
    *param_1 = *param_2;
    *param_2 = val;
}
#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    my_swap(&a,&b);
    printf("a = %d\n, b = %d\n", a,b); 
}