#include <stdio.h>

int main(void) {
    int i;

    // for (i = 0; i <= 10; i++) {
    //     printf("%d\n", i);
    //     break;
    //     printf("ABC\n");
    // }

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
        /*
         * Kalau angkanya lebih dari 4 dan genap, maka jangan tampilkan ABC.
         */
        if (i <= 4 && i % 2 == 0) {
            continue;
        }
        
        printf("ABC %d\n", i);
    }
    return 0;
}
