#include <stdio.h>

void main()
{
    //Membuat Array
    int nilai[6] = {36, 65, 78, 43, 65, 98};

    //Mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi Array nilai : %d\n", length);
}
