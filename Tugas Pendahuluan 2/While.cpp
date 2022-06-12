#include <stdio.h>

int main(void)
{
    char ulangi = 'y';
    int counter = 0;

    //Perulangan While
    while (ulangi == 'y')
    {
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (Y/T): ");
        scanf("%c", &ulangi);

        //increment counter
        counter++;
    }
    printf("\n\n-----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}