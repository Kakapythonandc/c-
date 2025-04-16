#include <stdio.h>

int main(void)
{
    int n;
    printf("Masukkan banyaknya angka: ");
    scanf("%d", &n);

    int x[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++) {
        printf("Angka ke-%d yang Anda masukkan adalah %d\n", i, x[i]);
    }
    return 0;
}
