#include <stdio.h>

int abc(int x, int y)
{
    return 2 * x + y;
}

int xyz(int a, int b, int c, int d)
{
    return (a + b) * (c + d);
}

int luas_persegi_panjang(int p, int l)
{
    return p * l;
}

int keliling_persegi_panjang(int p, int l)
{
    return 2 * (p + l);
}

int hitung_genap(int start, int end)
{
    int jumlah = 0, i;
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            jumlah++;
        }
        
    }
    return jumlah;
}

int main(void) 
{
    // int v = hitung_genap(1, 10);
    // printf("%d\n", jumlah);

    int x = 100;

    if (x > 50) {
        x = 300;
        printf("x dalam = %d\n", x);
    }

    printf("x luar = %d\n", x);

    return 0;
}