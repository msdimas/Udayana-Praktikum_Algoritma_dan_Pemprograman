#include <stdio.h>
int nilai1[3][4] = {{33,63,83,40},{53,13,47,37},{19,28,93,29}};
int nilai2[2][3][3]= {{{21,51,24},{45,63,61},{64,97,16}},{{53,42,50},{30,14,55},{43,56,27}}};
int pilih, i, j, k;

void multidms()
{
 printf ("\nArray Multi Dimensi\n");
 printf ("Daftar Nilai\n");
 for (i = 0; i < 3; i++)
  {
   for (j = 0; j < 4; j++)
   {
    printf ("Baris %d | Kolom %d = %d\n", i + 1, j + 1, nilai1[i][j]);
    printf("\n");
   }
  }
}

void tigadms()
{
 printf ("\nArray 3 Dimensi\n");
 printf ("Daftar Nilai\n");
 for (i = 0; i < 2; i++)
  {
  for (j = 0; j < 3; j++)
   {
   for (k = 0; k < 3; k++)
    {
           printf ("Baris %d | Kolom %d = %d\n", i + 1, j + 1, nilai2[i][j][k]);
    }
   printf ("\n");
   }
  }
}

int main()
{
 printf ("Program Menampilkan Array Berdimensi\n\n");
 printf ("1. Array Multi Dimensi\n2. Array 3 dimensi\nMasukan Pilihan : ");
 scanf ("%d", &pilih);

 switch (pilih)
 {
  case 1:
  multidms();
  break;

  case 2:
  tigadms();
  break;

  default:
  printf ("\nSalah memasukan pilihan");
 }

}
