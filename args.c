/*

Command Line Arguments (CLI arguments).

Command line argument adalah nilai yang diberikan lewat eksekusi
program.

Contoh:
./prog 1 2 3
./prog hallo
./prog a1 a2 a3

Command line arguments dapat diambil lewat parameter fungsi
main. Parameter yang dipakai adalah:

   int main(int argc, char *argv[]) {}

`argc` adalah jumlah argument, sedangkan `argv` adalah isi argument.

Di sini type dari argv adalah array of arrays of chars (atau array of strings).
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%s\n", argv[4]);
    return 0;
}
