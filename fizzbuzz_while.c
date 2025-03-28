
#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 300)
    {
        if (i % 5 == 0 && i % 3 == 0) 
        {
            printf("%d fizzbuzz\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d buzz\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d fizz\n", i);
        } 
        else 
        {
            printf("%d\n", i);
        }
        i++;
        
    } 
    
    return 0;
}