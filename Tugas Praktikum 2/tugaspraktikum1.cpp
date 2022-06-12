/*Masukan dari user bertipe string , agar program dapat dipakai untuk mengecek kata maupun angka*/

int main ()
{

/*
var input menyimpan masukan user
var i , counter dari depan
var j, counter dari belakang
var status , jika status bernilai 1 maka dinyatakan bukan palindrom . Di awal di set menjadi 0
var batascek , batas cek didapat dari tengah tengah pada suatu kata ataupun angka
var panjangkata , banyak huruf atau digit angka pada masukan user
*/

char input[50];
int i,j,status,batascek,panjangkata;
printf("masukan angka atau kata yang dicek (tanpa sepasi): ");
scanf ("%s",&input);
panjangkata = strlen(input);
batascek = panjangkata/2;
status = 0;

/*
i , counter dari depan maka i = 0 , karena array dimulai dari 0
j , counter dari belakang, karena array dimulai dari 0 maka j = panjang kata - 1
pada proses perulangan akan terus mengecek setiap huruf / digit angka apakah sama dengan cerminannya ,
jika suatu ketika ternyata tidak cocok maka status di set 1 yang menyatakan bukan palindrom,
counter i akan terus berjalan sampai tengah kata atau angka.
*/
i = 0;
j = panjangkata-1;

     while (status == 0 && i < batascek)
     {
          if(input[i]==input[j])
          {
             i ++;
             j --;
          }
          else
          {
             status = 1;
          }
     }

     /*menampilkan hasil*/
     if (status == 1)
     {
         printf("bukan palindrom");
     }
     else
     {
         printf("palindrom");
     }
return 0;
}
