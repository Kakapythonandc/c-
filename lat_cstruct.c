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
    struct siswa x;
    
    printf("Masukkan nama: ");
    scanf("%s", x.nama);
    printf("Masukkan alamat: ");
    scanf("%s", x.alamat);
    printf("Masukkan umur: ");
    scanf("%d", &x.umur);
    printf("Masukan Kelas: ");
    scanf("%d", &x.kelas);

    printf("Nama: %s\n", x.nama);
    printf("Alamat: %s\n", x.alamat);
    printf("Umur: %d\n", x.umur);
    printf("Kelas: %d\n", x.kelas);
    return 0;
}