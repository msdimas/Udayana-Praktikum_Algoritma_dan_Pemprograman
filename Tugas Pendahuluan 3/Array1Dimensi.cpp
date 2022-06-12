#include <stdio.h>

int main () {

   int n[ 10 ]; // n adalah bilangan array bertipe integer, yang bernilai 10
   int i,j;

    //inialisasi elemen array n - 0
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 0; //membuat elemen pada lokasi i dengan i + 0
   }
    //output dari setiap nilai elemen array
   for (j = 0; j < 10; j++ ) {
      printf("Elemen[%d] = %d\n", j, n[j] );
      // %d berarti bilangan integer , not double
   }
   return 0;
}
