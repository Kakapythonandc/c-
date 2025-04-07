#include <stdio.h>

int main(void)
{
    int s;
    printf("masukan nilai ujian Anda = ");
    scanf("%d", &s);

    if (75 >= s) {
        printf("anda...LULUS!!!");
    }
    else {
        printf("maaf anda tidak lulus");
    }
    return 0;
}