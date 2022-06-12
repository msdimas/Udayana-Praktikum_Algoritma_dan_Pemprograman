#include <stdio.h>
#include <string.h>
#include <conio.h>

struct data {
    char nama[100], nim[100], kelas[2];
};


int main() {
    struct data mahasiswa;

   
    printf("Masukkan Nama           : ");
    gets(mahasiswa.nama);
    printf("Masukkan NIM            : ");
    gets(mahasiswa.nim);
    printf("Masukkan Kelas          : ");
    gets(mahasiswa.kelas);

    printf("\n");
    
    printf("Nama        : %s\n", mahasiswa.nama);
    printf("NIM         : %s\n", mahasiswa.nim);
    printf("Kelas       : %s\n", mahasiswa.kelas);
    
    return 0;
}