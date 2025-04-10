#include <stdio.h>

int main(void) {
    int i;

    i = 1;
    while (i <= 300) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d fizzbuzz", i);
        }
        else if (i % 3 == 0) {
            printf("%d fizz", i);
        }
        else if (i % 5 == 0) {
            printf("%d buzz", i);
        }
        else {
            printf("%d ", i);
        }
        printf("\n");

        i++;
    }
    return 0;
}