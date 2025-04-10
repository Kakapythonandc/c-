#include <stdio.h>

int main(void) {
    int x = 30;

    switch (x) {
        case 10 ... 15:
            printf("tampilkan angka 10-15\n");
            break;
        default:
            printf("angka lain\n");
            break;
        case 20:
            printf("tampilkan angka 20\n");
            break;
    }
    return 0;
}