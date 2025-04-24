
/*
c-struct
menggabungkan nilai menjadi satu rangkaian.

apa bedanya dengan array?
1. array -> 1 tipe data
2. struct -> banyak tipe data

sebelum membuat program anda harus
menggunakan #include <string.h> untuk
strcpy (string copy) dan juga #include <stdio.h>
*/

#include <stdio.h>
#include <string.h>

struct siswa {
    char nama[30];
    int umur;
    char alamat[50];
    int kelas;
};

int main(void)
{
    struct siswa x;;
    x.umur = 14;
    x.kelas = 7;
    
    strcpy(x.nama, "Nayaka");
    strcpy(x.alamat, "Yogyakarta");

    printf("umur = %d\n", x.umur);
    printf("kelas = %d\n", x.kelas);
    printf("nama = %s\n", x.nama);
    printf("alamat = %s\n", x.alamat);
    
    return 0;
}