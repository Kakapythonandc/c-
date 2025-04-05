#include <stdio.h>

static int ar[] = {2, 3, 5, 7, 11, 13, 17, 19};

/*

Sebelum membuat loop, 3 hal yang harus diperhatikan:
1. Inisialisasi (nilai awal). Berapa?
2. Kapan loop berhenti?
3. Apa yang dilakukan setiap iterasi (output).

PERLU DIINGAT!!
Untuk yang while, i++ di dalam tanda kurung kurawal {}

*/

int main(void)
{
    int i;
    
    for (i = 0; i < 8; i += 3) {
        printf("%d\n", ar[i]);
        
    }

    return 0;
}