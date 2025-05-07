#include "bentuk.h"
#include <stdio.h>

#define PI 3.14

int area_rectangle(int p, int l)
{
    return p * l;
}

int area_triangle(float a, float t)
{
    return a * t / 2;
}

int area_parallerogram(int a, int t)
{
    return a * t;
}

int area_circle(float r)
{
    return PI * r * r;
}

int main(void)
{
    int menu;
    
    printf("1. Rectangle.\n");
    printf("2. Triangle.\n");
    printf("3. Parallerogramm\n");
    printf("4. Circle\n");
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

    else if (menu == 3)
    {
        struct parallelogram p;
        printf("Masukkan alas: ");
        scanf("%d", &p.a);
        printf("Masukkan tinggi: ");
        scanf("%d", &p.t);

        int hasil = area_parallerogram(p.a, p.t);

        printf("Area = %d\n", hasil);
    }

    else if (menu == 4)
    {
        struct circle c;
        printf("Masukkan jari-jari: ");
        scanf("%f", &c.r);

        float hasil = area_circle(c.r);

        printf("Area = %f\n", hasil);
        
    }
    
    
    else {
        printf("Menu Salah\n");
    }

    return 0;
}