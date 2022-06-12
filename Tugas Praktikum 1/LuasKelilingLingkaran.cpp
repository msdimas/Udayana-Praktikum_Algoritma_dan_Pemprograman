# include <stdio.h>
# define phi 3.14

int main()
{
    printf("Program Luas dan Keliling Lingkaran\n");
    printf("1. Luas\n");
    printf("2. Keliling\n");
    printf("Pilih : ");
    int pilih;
    scanf("%d", &pilih);
    if(pilih==1)
    {
        int r;
        printf("Masukkan jari-jari : ");
        scanf("%d",&r);
        printf("Luas Lingkaran adalah %.2f\n", phi*r*r);
    }
    else if(pilih==2)
    {
        int r;
        printf("Masukkan jari-jari : ");
        scanf("%d",&r);
        float keliling =2*phi*r;
        printf("Keliling Lingkaran adalah %.2f\n", keliling);
    }
    else 
    {
        printf("Pilihan anda tidak ada\n");
    }
}