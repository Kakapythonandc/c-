#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 300; i++) {
        printf((i % 3 == 0 && i % 5 == 0) ? "%d FizzBuzz\n" : ((i % 3 == 0) ? "%d Fizz\n" : ((i % 5 == 0) ? "%d Buzz \n" : "%d \n")), i);
        
    }
    return 0;
}