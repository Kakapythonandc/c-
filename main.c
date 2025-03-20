/*
   #include <stdio.h> dipakai untuk mengambil fungsi printf.

   Jika menggunakan fungsi printf, maka wajib melakukan #include <stdio.h>.
*/

#include <stdio.h>

/*
   int main(void) adalah sebuah fungsi utama yang dijalankan
   oleh program.

   Semua program C, memiliki fungsi main. Fungsi main adalah
   fungsi yang pertama kali dijalankan.

   Maksud dari (void) adalah fungsi tersebut tidak memiliki
   argument (parameter).

   `int` sebagai return value.

   Semua fungsi main() di bahasa C, harus return type integer.

   Return angka 0 berarti berhasil.
   Return angka selain 0, berarti gagal.
*/
int main(void)
{
    printf("Hello World!\n");
    return 0;
}
