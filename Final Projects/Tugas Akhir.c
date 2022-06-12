#include <stdio.h>

int main ()
{
    int r,u,bil[4],pay[4],harga[4],z,i,x,y;

    printf("\t\t\tPROGRAM PEMESANAN BARANG\n");
    printf("\t\t\t========================\n\n");

    for(i=0;i<=4;i++){
        bil[i]=0;
    }
    harga[0]=15000;
    harga[1]=20000;
    harga[2]=17000;
    harga[3]=20000;
    harga[4]=10000;
    do{
        printf("\t\t\tBarang yang dijual\n\n");
        printf("\t\t\t1. Roti Tawar: Rp 15k\n");
        printf("\t\t\t2. Selai Coklat 30ml: Rp 20k\n");
        printf("\t\t\t3. Selai Stroberi 30ml: Rp 17k\n");
        printf("\t\t\t4. Selai Kacang 30ml: Rp 20k\n");
        printf("\t\t\t5. Susu Kental Manis ml: Rp 10k\n");
        do{
            printf("\n\nKetik nomor barang yang ingin dibeli : ");
            scanf("%d",&z);
            switch(z){
                case 1:
                   printf("\nKetik jumlah yang ingin dibeli : ");
                   scanf("%d",&bil[0]);
                break;
                case 2:
                   printf("\nKetik jumlah yang ingin dibeli : ");
                   scanf("%d",&bil[1]);
                break;
                case 3:
                   printf("\nKetik jumlah yang ingin dibeli : ");
                   scanf("%d",&bil[2]);
                break;
                case 4:
                   printf("\nKetik jumlah yang ingin dibeli : ");
                   scanf("%d",&bil[3]);
                break;
                case 5:
                   printf("\nKetik jumlah yang ingin dibeli : ");
                   scanf("%d",&bil[4]);
                break;
                default:
                    printf("\nMasukkan yang anda ketik tidak terdefinisi dalam program ini\n");
            }
        r=0;
        printf("\nKetik 1 jika anda ingin menambah pesanan anda atau\n");
        printf("masukkan lain akan melanjutkan ke pembayaran : ");
        scanf("%d",&r);
        }
        while(r==1);

        printf("\n");
        for(i=0;i<=4;i++){
            printf("Barang no.%d yang anda beli berjumlah: %d\n",i+1,bil[i]);
        }


        for(i=0;i<=4;i++){
            pay[i]=bil[i]*harga[i];
        }

    x=pay[0]+pay[1]+pay[2]+pay[3]+pay[4];
    do{
        printf("\n\nHarga yang harus anda bayar adalah RP %d\n", x);

        printf("\nKetik 1 jika anda tidak ingin melanjutkan transaksi : ");
        scanf("%d",&y);

        if(y==1){
            x=0;
        }

        if(x>0){
            printf("\nMasukkan uang anda : ");
            scanf("%d",&i);
                if(i>=x){
                    i=i-x;
                    printf("Kembalian anda adalah Rp %d\n",i);
                    x=0;
                }
                else{
                    printf("Uang anda kurang, mohon ulang transaksi\n");
                }
        }
    }
    while(x>0);

    printf("\nKetik 1 jika anda ingin mengulang program pemesanan barang, masukkan lain akan mengakhiri program : ");
    scanf("%d",&u);
    }
    while(u==1);
    return 0;
}
