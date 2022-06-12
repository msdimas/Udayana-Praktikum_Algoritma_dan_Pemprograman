#include <stdio.h>
#include <conio.h>
#define phi 3.14
int main(){
    float r, luas, keliling;
    printf("Jari-Jari : ");
    scanf("%f",&r);
    luas=phi*r*r ;
    keliling=phi*r*2 ;
    printf("jadi luas lingkaran %f\n ",luas );
    printf("jadi Keliling %f\n ",keliling );
    getch();
}