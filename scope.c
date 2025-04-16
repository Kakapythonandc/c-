#include <stdio.h>

int ax = 100; // global variable

void fx(void)
{
    printf("ax = %d\n", ax);
}

int main(void)
{
    int dx = 400; //local variable

    int ax = 500;

    {
        ax = 900;
        printf("ax = %d\n", ax);
    }
    
    printf("ax = %d\n", ax);
    return 0;
}