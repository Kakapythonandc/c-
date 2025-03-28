#include <stdio.h>

int main(void)
{
    int a = 1, b = 20, i;
    
    for (i = a; i <= b; i++ ) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}