#include <stdio.h>
 #include <stdlib.h>
 
int main(void)
 {
 int k;
 
struct tanggal{
 int d;
 int m;
 int y;
 };
 
struct{
 char nama[20];
 int nim[10];
 struct tanggal tgl;
 float uts;
 float uas;
 }dt[5];
 
printf("=====Masukan Data Mahasiswa \n\n");
 
for(k=0;k<5;k++)
 {
 printf("No. %i \n",k+1);
 printf("Nama = "); scanf("%s",&dt[k].nama);
 printf("Nim = "); scanf("%i",&dt[k].nim);
 printf("Tanggal Lahir = "); scanf("%i %i %i",&dt[k].tgl.d,&dt[k].tgl.m,&dt[k].tgl.y);
 printf("Nilai UTS = "); scanf("%f",&dt[k].uts);
 printf("Nilai UAS = "); scanf("%f",&dt[k].uas);
 }
 
printf("|No | Nama | NIM |Tanggal Lahir | UTS | UAS |Nilai Akhir |Ket | \n");
 for(k=0;k<5;k++)
 {
 printf("|%i | %s | %i |%i %i %i | %.2f | %.2f | %.2f |\n",k+1,dt[k].nama,dt[k].nim,dt[k].tgl.d,dt[k].tgl.m,dt[k].tgl.y,
 dt[k].uts,dt[k].uas,(dt[k].uts+dt[k].uas)*0.5);
 
if((dt[k].uts+dt[k].uas)*0.5>=75)
 printf("Cemerlang \n");
 if((dt[k].uts+dt[k].uas)*0.5 >= 55 || (dt[k].uts+dt[k].uas)*0.5<74)
 printf("Baik \n");
 else
 printf("Cukup \n");
 }
 
system("pause");
 return(0);
 }