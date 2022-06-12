#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <conio.h>
#include  <ctype.h>


char  *soLetras(char  word[]){
    char c;
    int  i  =  0;
    do{
    c  =  getch();
    if(isalpha(c)  !=  0  ||  c  ==  32){ word[i]  =  c;
    i++;
    printf("%c",  c);
    }
    else  if(c  ==  8  &&  i){ word[i]  =  '\0'; i--;
    printf("\b  \b");
    }
}while(c  !=  13);
word[i]  =  '\0';
printf("\n");
return  word;
}

int  soNumeros(){
    char  word[50];
    char c;
    int  i  =  0;
    int  num;
    do{
    c  =  getch();
    if(isdigit(c)  != 0){
        word[i]  =  c;
        i++;
        printf("%c",  c);
        }
        else  if(c  ==  8  &&  i){ word[i]  =  '\0'; i--;
        printf("\b  \b");
        }
    }while(c  !=  13);
    word[i]  =  '\0';
    num  =  atoi(word);
    printf("\n");
    return  num;
    }

char  *chooseEncrypt(char  word[],  int  shift){
    int  i;
    shift  =  shift  %  26;
    for(i  =  0;  i  <	strlen(word);  i++){
            switch(word[i]){
                case ' ':
                    word[i]  =  word[i]  -  shift;
                break;
            }
            word[i]  =  toupper(word[i]);
            word[i]  =  word[i]  +  shift;
            if(word[i]  >  90)
                word[i]  =  word[i]  -  26;
            word[i]  =  tolower(word[i]);
}
return  word;

}

char  *chooseDecrypt(char  word[],  int  shift){
    int  i;
    shift  =  shift  %  26;
    for  (i  =  0;  i  <  strlen(word);  i++){
            switch(word[i]){
                case  32:
                    word[i]  =  word[i]  +  shift;
                break;
            }
        word[i]  =  toupper(word[i]);
        word[i]  =  word[i]  -  shift;
        if(word[i]  <  65  &&  word[i]  !=  32){
            word[i]  =  word[i]  +  26;
        }
        word[i]  =  tolower(word[i]);
    }
    return  word;
}

int  main(){
    printf("====================================\n");
    printf("	     Algoritma              \n");
    printf("	  Caesar  Cipher            \n");
    printf("====================================\n");
    int  i  =  1,  shift;
    char  word[50];
    while(i  !=  0){
        printf("1.  Menambah\n");
        printf("2.  Menurun\n");
        printf("3.  Exit.\n");
        i  =  soNumeros(); switch(i){
        case  1:
        system("cls");
        printf("Masukkan  Shift\t:  ");
        shift  =  soNumeros();
        printf("Masukkan  String\t:  ");
        soLetras(word);
        strcpy(word,  chooseEncrypt(word,  shift));
        printf("Hasil  Shift\t:  %s\n\n\n",  word);
        system("pause");
        break;
        case  2:
        system("cls");
        printf("Masukkan  Shift\t:  ");
        shift  =  soNumeros();
        printf("Masukkan  String\t:  ");
        soLetras(word);
        strcpy(word,  chooseDecrypt(word,  shift));
        printf("Hasil  Shift\t:  %s\n\n\n",  word);
        system("pause");
        break;
        case  3:
        system("cls");
        printf("====================================\n");
        printf("	    SAMPAI  JUMPA  LAGI  :)     \n");
        printf("====================================");
        printf("\n");
        return  0;
    }
system("cls");
}
return  0;
}
