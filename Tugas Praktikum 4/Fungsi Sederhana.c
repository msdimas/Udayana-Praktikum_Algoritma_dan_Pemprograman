#include <stdio.h>

int fungsi_luas(int panjang, int lebar)  //Mendeklarasikan Fungsi
{
    int luas; // Isi dari Fungsi
    luas = panjang*lebar;

    return(luas); // Mengembalikan nilai fungsi
}

int main()
{
    int panjang = 5;
    int lebar = 4;
    int luas;

    luas = fungsi_luas(panjang,lebar); //Memanggil Fungsi
    printf("Luasnya adalah %d", luas); //Menampilkan nilai luas setelah dipanggil dari fungsi

    return 0;
}
