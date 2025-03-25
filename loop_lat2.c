#include <stdio.h>
int main(void)
{
    int a, b, i;

    printf("masukan angka pertama: ");
    scanf("%d", &a);
    printf("masukan angka kedua: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;   
}