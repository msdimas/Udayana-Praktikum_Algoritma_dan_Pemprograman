#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    int id;
    char fname[20];
    char lname[20];
    char nim[20];
    char ipk[20];
    char alamat[20];
    char no_hp[20];
};

void addData()
{
    FILE *outfile;

    outfile = fopen ("person.dat", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }

    printf("Masukkan Jumlah Data : ");
    int jumlah;
    scanf("%d", &jumlah);
    struct person data[jumlah];
    int i;
    for (i = 0; i < jumlah; i++)
    {
        printf("\nData ke-%d\n", i+1);
        printf("ID : ");
        scanf("%d", &data[i].id);
        printf("Nama Depan : ");
        fflush(stdin); gets(data[i].fname);
        printf("Nama Belakang : ");
        fflush(stdin); gets(data[i].lname);
        printf("NIM : ");
        fflush(stdin); gets(data[i].nim);
        printf("IPK : ");
        fflush(stdin); gets(data[i].ipk);
        printf("Alamat : ");
        fflush(stdin); gets(data[i].alamat);
        printf("No HP : ");
        fflush(stdin); gets(data[i].no_hp);
    }

    fwrite(data, sizeof(data), jumlah, outfile);

    if(fwrite != 0)
        printf("Sukses Menambah data !\n");
    else
        printf("error writing file !\n");

    fclose (outfile);
    printf("\nApakah anda ingin menambah data lagi ? (y/n) : ");
    char answer;
    scanf("%c", &answer);
    if (answer == 'y' || answer == 'Y')
        addData();
        else printf("\nTerima Kasih\n");
}

void readData()
{
    FILE *infile;
    struct person input;

    infile = fopen ("person.dat", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

    while (fread (&input, sizeof(struct person), 1, infile))
    {
        printf ("\nid: %d\n", input.id);
        printf ("nama depan: %s\n", input.fname);
        printf ("nama belakang: %s\n", input.lname);
        printf ("nim: %s\n", input.nim);
        printf ("ipk: %s\n", input.ipk);
        printf ("alamat: %s\n", input.alamat);
        printf ("no hp: %s\n", input.no_hp);
    }

    fclose (infile);
}

int main(){
    printf("Menu:\n");
    printf("1. Add Data\n");
    printf("2. Read Data\n");
    printf("3. Exit\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            addData();
            break;
        case 2:
            readData();
            break;
    }
}
