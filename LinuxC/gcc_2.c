#include <stdio.h>
#include "gcc_2_1.c"
#include "gcc_2_2.c"
int gcc_2_2();
int gcc_2_1();
int main()
{
    printf("gcc_2\n");
    gcc_2_2();
    gcc_2_1();
}