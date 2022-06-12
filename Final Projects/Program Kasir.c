#include <stdio.h>
#include <stdlib.h>

int main()

{

int ngoreng,nrames,teh,jeruk;

int uang, kembalian, total;



printf("===========================================\n");
printf("||                DAFTAR MENU            ||\n");
printf("===========================================\n\n");

printf("1. Nasi Goreng Rp15.000\n");

printf("2. Nasi Rames Rp10.000\n");

printf("3. Es Teh Rp2.000\n");

printf("4. Es Jeruk Rp3.000\n\n");

printf("Masukan jumlah beli Nasi Goreng : ");

scanf("%d",&ngoreng);

printf("Masukan jumlah beli Nasi Rames : ");

scanf("%d",&nrames);

printf("Masukan jumlah beli ES Teh : ");

scanf("%d",&teh);

printf("Masukan jumlah beli ES Jeruk : ");

scanf("%d",&jeruk);



printf("\nMasukan Uang tunai : Rp");

scanf("%d",&uang);



total=(ngoreng*15000)+(nrames*10000)+(teh*2000)+(jeruk*3000);

kembalian=uang-total;



printf("\n---------------Struk---------------\n");

printf("Uang :Rp%d\n",uang);

printf("Total :Rp%d\n",total);

printf("Kembalian :Rp%d\n",kembalian);

printf("-----------------------------------");



return 0;

}
