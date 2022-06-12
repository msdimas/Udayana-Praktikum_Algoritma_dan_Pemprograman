#include <stdio.h>
int main(void)
{
  char nilai;
 
  printf("Input Nilai Anda (A - E): ");
  scanf("%c",&nilai);
 
  if (nilai == 'A' ) {
    printf("Pertahankan! \n");
  }
  else if (nilai == 'B' ) {
    printf("Harus lebih baik lagi \n");
  }
  else if (nilai == 'C' ) {
    printf("Perbanyak belajar \n");
  }
  else if (nilai == 'D' ) {
    printf("Jangan keseringan main \n");
  }
  else if (nilai == 'E' ) {
    printf("Kebanyakan bolos... \n");
  }
  else {
    printf("Maaf, format nilai tidak sesuai \n");
  }
  return 0;
}