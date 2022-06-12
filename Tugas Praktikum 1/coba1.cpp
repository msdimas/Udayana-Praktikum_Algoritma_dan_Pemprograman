#include <stdio.h>
int main()
{
  float k, r;
  const float phi = 3.14;
  printf("=====================================\n");
  printf("Program Menghitung Keliling Lingkaran\n");
  printf("=====================================\n");
  printf("Masukkan panjang jari-jari lingkaran: ");
  scanf("%f", &r);
  k = 2 * phi * r;
  printf("Keliling Lingkaran adalah %.2f\n", k);
  return 0;
}