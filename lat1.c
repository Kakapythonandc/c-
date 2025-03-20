#include <stdio.h>
#include <math.h>
/*
    Format specifier dalam printf:
    %d = integer
    %s = string (array of char)
    %c = char

    Khusus untuk perpangkatan, di C menggunakan fungsi pow().

    Fungsi pow() berarti power.
*/

int main(void)
{
    int a, b, hasil;
    char o;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    getchar();
    printf("Masukkan operator: ");
    scanf("%c", &o);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    if (o == '+') {
        hasil = a + b;
    } else if ( o == '-') {
        hasil = a - b;
    } else if (o == '/') {
        hasil = a / b;
    } else if (o == '*') {
        hasil = a * b;
    } else if (o == '%') {
        hasil = a % b;
    } else if (o == '^') {
        hasil = pow(a, b);
    }

    printf("Hasil = %d\n", hasil);
    return 0;
}
