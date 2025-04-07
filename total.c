/*
masukan 10 angka setelah itu tampilkan penjumlahan dari
10 angka yang dimasukan
*/

/*
Catatan

Tujuan looping itu untuk mengulangi code
tanpa 1 per 1
*/

#include <stdio.h>

int main(void)
{
    int i;
    int angka[10];
    int total = 0;
    
    for (i = 0; i < 10; i++)
    {
        printf("masukan angka ke-%d = ", i + 1);
        scanf("%d\n", &angka[i]);

        total += angka[i];
        
    }
    printf("total = %d\n", total);
    return 0;
}
