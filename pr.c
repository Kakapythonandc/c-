#include <stdio.h>

int main(void)
{
    int i, x, y, jumlah = 0;

    printf("masukan angka pertama: ");
    scanf("%d", &x);
    printf("masukan angka kedua: ");
    scanf("%d", &y);

    for (i = x; i <= y; i++) {
        if (i % 2 == 0) {
            jumlah++;
        }
    }

    printf("Jumlah bilangan genap = %d \n", jumlah);
    
    return 0;
}