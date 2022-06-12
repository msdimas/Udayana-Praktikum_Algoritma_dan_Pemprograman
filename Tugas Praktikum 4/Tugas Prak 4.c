#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int i, pil, j;

void tambah(char (*writeinside)[]){
    char tammbahan[100];
    printf("Masukkan Penambahan: "); fflush(stdin); gets(tammbahan);
    strcat(*writeinside, tammbahan);
    printf("Output: %s \n", *writeinside);

}

void tukar(char writeinside[]){
    char tukar[100];
    printf("Masukkan penukaran: "); fflush(stdin); gets(tukar);
    strcpy(writeinside, tukar);
    printf("Output: %s \n", writeinside);
}

void rubah(char writeinside[]){
    char string, rubah;
    printf("Masukkan kata yang ingin dirubah: ");
    scanf(" %c", &string);

    printf("Masukkan kata pengganti: ");
    scanf(" %c", &rubah);
  char *cek = strchr(writeinside, string);
    if(cek != NULL){
        *cek = rubah;
        printf("Output: %s \n", writeinside);
    }
    else{
        printf("Kata tidak ditemukan \n");
    }
}

int main()
{
    char tulis[100];
    char(*write)[] = &tulis;
    printf("Masukkan Nama Anda : "); fflush(stdin); gets(tulis);

    do
    {
        start:
        system("cls");
        printf("String Saat Ini: %s \n", tulis);
        printf("=========MENU=========\n");
        printf("1. Tambah\n");
        printf("2. Tukar\n");
        printf("3. Rubah\n");
        printf("4. Keluar\n");
        printf("======================\n");
        printf("Pilihan: "); scanf("%d", &pil);

        switch (pil)
        {
        case 1:
            tambah(write);
            system("pause");
            goto start;
            break;
        case 2:
            tukar(tulis);
            system("pause");
            goto start;
            break;
        case 3:
            rubah(tulis);
            system("pause");
            goto start;
            break;
        case 4:
            printf("SAMPAI JUMPAAH!\n");
            break;

        default:
            printf("Pilihan tidak ada\n");
            system("pause");
            goto start;
            break;
        }
    } while (pil != 4);
    return 0;
}
