#include <stdio.h>

/*
 Catatan tentang string di C:
 Di C, string diakhiri dengan sebuah character yang bernama nul char.
 Literalnya di C ditulis dengan \0

 Incremental:
   i++ artinya nilai i ditambah 1.
   i-- artinya nilai i dikurang 1.
   i += 2 artinya nilai i ditambah 2.
   i -= 2 artinya nilai i dikurang 2.

 Looping di C ada beberapa jenis:
 1) for-loop.
    Contoh:
      `for (i = 1; i <= 10; i++) {}`

    For loop meliki 3 argument:
       Pertama: Inisialisasi atau pemberian nilai awal.
       Kedua  : Kondisi yang harus dipenuhi agar looping tetap berjalan.
       Ketiga : Aksi yang dilakukan setiap iterasi.
      
 2) while-loop
    Contoh:
      int i = 0;
      while (i < 10) {
        printf("i = %d\n", i);
        i++;
      }

    While loop hanya memiliki 1 argument:
      Argumennya berisi kondisi yang harus dipenuhi agar looping tetap berjalan.

 3) do-while-loop
*/

int main(void)
{
    // char string[][4] = {"abc", "def", "ghi"};
    // int i;

    // for (i = 0; i < 3; i++) {
    //     printf("%s\n", string[i]);
    // }

    // int i;
    // for (i = 1; i <= 100; i += 5) {
    //   printf("i = %d\n", i);
    // }


    int i = 1;
    while (i <= 10) {
      if (i % 2 == 0) {
        printf("i = %d\n", i);
      }
      i++;
    }

    return 0;
}