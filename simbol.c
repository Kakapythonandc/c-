#include <stdio.h>

int main(void)
{
    int i, s;
    printf("masukan angka = ");
    scanf("%d", &s);

    for (i = 1; i <= s; i++)
    {
        printf("@ ");
    }
    printf("\n");
    return 0;
}