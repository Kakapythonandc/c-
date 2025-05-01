#include "bentuk.h"
#include <stdio.h>

int area_rectangle(int p, int l)
{
    return p*l;
}

int area_triangle(float a, float t)
{
    return a*t/2;
}

int main(void)
{
    int menu;
    
    printf("1. Rectangle.\n");
    printf("2. Triangle.\n");
    printf("Pilih bentuk: ");
    scanf("%d", &menu);

    if (menu == 1) {
        struct rectangle r;
        printf("Masukkan panjang: ");
        scanf("%d", &r.p);
        printf("Masukkan lebar: ");
        scanf("%d", &r.l);

        int hasil = area_rectangle(r.p, r.l);
        
        printf("Area = %d\n", hasil);
    }
    else if (menu == 2) {
        struct triangle t;
        printf("Masukkan alas: ");
        scanf("%f", &t.a);
        printf("Masukkan tinggi: ");
        scanf("%f", &t.t);

        float hasil = area_triangle(t.a, t.t);

        printf("Area = %f\n", hasil);
    }
    else {
        printf("Menu Salah\n");
    }

    return 0;
}