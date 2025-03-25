#include <stdio.h>

int main(void)
{
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
    return 0;
}