#include <stdio.h>

int main(void)
{
    char x;
    do {
        int a, b, i;

        printf("Masukkan angka pertama: ");
        scanf("%d", &a);
        printf("Masukan angka kedua: ");
        scanf("%d", &b);

        for (i = a; i <= b; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }

        printf("Apakah anda ingin mengulangi program lagi? (y/n) ");
        getchar();
        scanf("%c", &x);
    } while (x == 'y');
    return 0;
}