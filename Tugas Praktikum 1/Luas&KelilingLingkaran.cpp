# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main()
{
    float k,l,jr;
    const float phi = 3.14;
    int pill;
    tampil:
    printf("===================================\n");
    printf("PROGRAM KELILING DAN LUAS LINGKARAN\n");
    printf("===================================\n");
    printf("Menu : \n");
    printf("1. Keliling\n");
    printf("2. Luas\n");
    printf("Pilih : \n");
    scanf("%f",&pill);

    system("cls");
    if(pill==1)
    {
        printf("===========================\n");
        printf("   Keliling Lingkaran\n");
        printf("===========================\n");
        printf("Jari - Jari : \n");
        scanf("%f",&jr);

        k=2*phi*jr;

        printf("Keliling adalah %.2f", k);
    }
    if(pill==2)
    {
        printf("===========================\n");
        printf("      Luas Lingkaran\n");
        printf("===========================\n");
        printf("Jari - Jari : \n");
        scanf("%f",&jr);

        l=phi*jr*jr;

        printf("Luas adalah %.2f", l);
    }
    return 0;
}