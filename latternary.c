#include <stdio.h>

int main(void)
{
    int n;
    printf("masukkan nilai: ");
    scanf("%d", &n);

    char x = (n >= 90) ? 'A' : ((n >= 80) ? 'B': ((n >= 70) ? 'C' : 'D'));

    printf("Nilai Anda: %c\n", x);
    return x;
}