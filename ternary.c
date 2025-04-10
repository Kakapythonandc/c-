#include <stdio.h>

int main(void){
    int a = 5;
    int b = 14;
    int c = (b - a < 11) ? b - a : b + a;

    printf("c = %d\n", c);

    return 0;
}
