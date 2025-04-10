/*
Ternary Nested
int c = 
    (a > 20) ? 10 : ((b < 5) ? 2 : 7);

*/

#include <stdio.h>

int main(void)
{
    int a = 16;
    int b = 8;
    int c = 30;
    int d = 40;
    int e = (a % 3 == 0) ? ((b % 2 == 0) ? c - 10 : c + 10) : ((d % 5 == 0) ? d - c : a + b);

    printf("e = %d\n", e);
    return 0;
}
