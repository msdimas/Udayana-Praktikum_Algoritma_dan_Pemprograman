#include <stdio.h>
#include <time.h>
#include <windows.h>

int menu(){
	int banyak;
	system("cls");
	puts("+===========================================================================================+");
	puts("|				Selamat Datang di Warunk Istimewa\t			|");
	puts("+===========================================================================================+");
	puts("| No | 	 Nama Makanan 	| 	 Harga 	 	| No |	Nama Minuman	|	Harga		|");
	puts("|===========================================================================================|");
	puts("| 1  | Pecel\t\t|	Rp. 8000	| 6  | Es Teh\t\t|\tRp. 4000	|");
	puts("| 2  | Soto\t\t|	Rp. 10000	| 7  | Es Jeruk\t\t|\tRp. 5000	|");
	puts("| 3  | Pizza\t\t|	Rp. 20000	| 8  | Fanta\t\t|\tRp. 8000	|");
	puts("| 4  | Burger\t\t|	Rp. 12000	| 9  | Coca Cola\t|\tRp. 7000	|");
	puts("| 5  | Steak\t\t|	Rp. 30000	| 10 | Air Putih\t|\tRp. 3000	|");
	puts("+===========================================================================================|");

	return banyak;
}


int main(){

	char nama[20];
	int pil, jumlah, banyak, porsi;
	int total, bayar, diskon, akhir, harga, uang, kembalian;

    time_t waktu;
    time(&waktu);

	menu:
		system("cls");
		fflush(stdin);
		printf("Masukkan nama Anda : ");
		scanf("%[^\n]s", nama);
      banyak = menu();
	  	printf("\nHalo %s,\nSilahkan masukkan jumlah menu yang ingin dipesan : ", nama);
		scanf("%d", &banyak);
		jumlah=1;
		bayar=0;
	for(jumlah=1; jumlah<=banyak; jumlah++){
		ulang:
		puts("");
		puts("===========================");
		printf("Masukkan Menu : ");
		scanf("%d", &pil);

		switch(pil){
			case 1:
			puts("===========================");
			puts("Nama Makanan\t: Pecel");
			puts("Harga\t : Rp. 8000,-");
			printf("Jumlah\t : ");
			scanf("%d", &porsi);
			harga=8000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 2:
			puts("===========================");
			puts("Nama Makanan\t: Soto");
			puts("Harga\t : Rp. 10000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=10000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 3:
			puts("===========================");
			puts("Nama Makanan\t: Pizza");
			puts("Harga\t : Rp. 20000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=20000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 4:
			puts("===========================");
			puts("Nama Makanan\t: Burger");
			puts("Harga\t : Rp. 12000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=12000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 5:
			puts("===========================");
			puts("Nama Makanan\t: Steak");
			puts("Harga\t : Rp. 30000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=30000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 6:
			puts("===========================");
			puts("Nama Minuman\t: Es Teh");
			puts("Harga\t : Rp. 4000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=4000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 7:
			puts("===========================");
			puts("Nama Minuman\t: Es Jeruk");
			puts("Harga\t : Rp. 5000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=5000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 8:
			puts("===========================");
			puts("Nama Minuman\t: Fanta");
			puts("Harga\t : Rp. 8000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=8000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 9:
			puts("===========================");
			puts("Nama Minuman\t: Coca Cola");
			puts("Harga\t : Rp. 7000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=7000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;

			case 10:
			puts("===========================");
			puts("Nama Minuman\t: Air Putih");
			puts("Harga\t : Rp. 3000,-");
			printf("Jumlah\t: ");
			scanf("%d", &porsi);
			harga=3000;
			total = harga * porsi;
			printf("Total Harga : Rp. %d,-\n", total);
			puts("===========================");
			break;
			default:
				printf("- Silahkan input kembali\n");
				goto ulang;
		}
		bayar = bayar + total;
	}
		puts("");
		puts("+======================================+");
		puts("| --------- STRUK PEMBAYARAN --------- |");
		puts("+======================================+");
		printf("Total Bayar\t\t\t: Rp. %d,-\n", bayar);
		printf("Masukkan Jumlah Uang Anda\t: Rp. ");
		scanf("%d", &uang);

		if((55000<=bayar)&&(bayar<=119999)){
			diskon = bayar * 0.1;
			puts("Kamu mendapatkan diskon sebesar 10%");
		} else if((120000<=bayar)&&(bayar<=500000)){
            diskon = bayar * 0.2;
            puts("Kamu mendapatkan diskon sebesar 20%");
        } else{
            diskon = 0;
        }

        printf("Diskon\t\t= Rp. %d\n", diskon);
        akhir = bayar - diskon;
        kembalian = uang - akhir;
        printf("Kembalian\t= Rp. %d\n", kembalian);
        puts("+=======================================+");
        puts("|             Terima Kasih              |");
        puts("|           dan Sampai Jumpa!           |");
        puts("+=======================================+");
        puts("");

		char ulang;
        printf("Apakah Anda ingin belanja lagi?[y/n] : ");
        scanf("%s", &ulang);
        if(ulang == 'Y' || ulang == 'y'){
            system("cls");
            goto menu;
        } else{
            system("cls");
            printf("Terima kasih sudah berbelanja kak %s! Sampai Jumpa!\n", nama);
			printf("======================================================\n");
            printf("\t\t%s\n", ctime(&waktu));
			printf("======================================================\n");
        }

	return 0;
}
