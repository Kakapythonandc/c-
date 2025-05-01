/*
Operator Sizeof

dugunakan untuk mengukur ukuran variabel dalam satuan
oktet/byte

apa itu oktet?
oktet itu adalah, 1 oktet = 8 bits

jika, 8 bytes = 64 bit
      32 bit = 4 oktet
*/

// sizeof(/* type data */)

#include <stdio.h>

struct koordinat {
    long a;
    short b;
    int c;
    int d;
    char e;
};

struct rx
{
    int k;
    char p;
    char r;
    char q;
};

struct tx
{
    short a;
    short b;
    int c;
};

struct dx
{
    long a;
    int b;
    int c;
    char d;
    long e;
    char f;
    int g;
};

struct dx *a;

int main(void)
{

    // Size of bisa dipakai langsung ke tipe datanya.
    printf("Ukuran dari tipe integer adalah %zu bytes\n", sizeof(int));

    // Size of juga bisa dipakai pada sebuah variable.
    long x = 10000;
    printf("Ukuran dari tipe long adalah %zu bytes\n", sizeof(x));
    printf("Ukuran dari tipe long adalah %zu bytes\n", sizeof(long));

    printf("Ukuran dari tipe char adalah %zu bytes\n", sizeof(char));
    printf("Ukuran dari tipe short adalah %zu bytes\n", sizeof(short));

    long y[5];
    printf("ukuran size = %zu bytes\n", sizeof(y));

    int arr[30];

    printf("Ukuran dari array adalah %zu bytes\n", sizeof(arr));
    printf("Jumlah isi array ada %zu\n", sizeof(arr) / sizeof(arr[0]));

    printf("Ukuran struct koordinat adalah %zu bytes\n", sizeof(struct koordinat));
    printf("Ukuran struct rx adalah %zu bytes\n", sizeof(struct rx));

    printf("Ukuran struct tx adalah %zu bytes\n", sizeof(struct tx));

    printf("Ukuran struct dx adalah %zu bytes\n", sizeof(struct dx));

    return 0;
}
