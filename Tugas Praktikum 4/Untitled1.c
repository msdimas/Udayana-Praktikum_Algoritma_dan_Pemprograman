#include <stdio.h>

 //prototipe fungsi
 //parameter formal berupa variabel: panjang, lebar dan diameter
 float hitung_luas_persegi_panjang(float panjang, float lebar);
 float hitung_luas_lingkaran(float diameter);

 int main ()
 {
  float panjang = 20.25;
  float lebar = 4.75;
  float luas;

  //parameter aktual berupa variabel

  luas = hitung_luas_persegi_panjang(panjang,lebar);
  printf("LUAS PERSEGI PANJANG = %f \n",luas);

  //parameter aktual berupa konstanta

  luas = hitung_luas_lingkaran(8.5);
  printf("LUAS LINGKARAN = %f \n",luas);
  return 0;
 }

 //definisi fungsi
 //parameter formal berupa variabel: panjang, lebar dan diameter

 float hitung_luas_persegi_panjang(float panjang, float lebar)
 {
  return (panjang * lebar);
 }

 float hitung_luas_lingkaran(float diameter)
 {
  return (3.14 * diameter * diameter / 4 );
 }
