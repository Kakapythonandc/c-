/*
    Variabel dalam bahasa C.

    Variabel dalam bahasa C harus ditentukan tipe
    datanya. Beberapa tipe data yang digunakan di
    C, antara lain: int, char, array of type.

    Format specifier dalam printf:
    %d = integer
    %s = string (array of char)
    %c = char
*/

#include <stdio.h>

int main(void)
{
    int angka = 1;
    char huruf = 'B';
    char string[] = "hello";
    printf("nilai variabel angka = %d\n", angka);
    printf("nilai variabel huruf = %c\n", huruf);
    printf("nilai variabel string = %s\n", string);
    return 0;
}