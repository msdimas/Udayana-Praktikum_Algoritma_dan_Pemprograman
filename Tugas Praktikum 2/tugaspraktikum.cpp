#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int exit();
int main()
{
    int i, reversed = 0, remainder, original, length, pil;
    char string1[20];

system("cls");
printf("Palindrome Checker\n\n");

printf("1. Integer\n");
printf("2. String\n");
printf("3. Exit\n");
printf(">>");
scanf("%d", &pil);

switch (pil)
{
case 1:
    printf("\nEnter an integer: ");
    scanf("%d", &i);
    original = i;

    // integer disimpan ke variabel reverse
    while (i != 0)
    {
        remainder = i % 10;
        reversed = reversed * 10 + remainder;
        i /= 10;
    }

    // mengecek apakah palindrome atau bukan
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    
    printf("\n\nPRESS ENTER\n");
    system("pause");
    return main();
    break;

case 2:
    printf("\nEnter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0; i<length; i++)
    {
        if string1[i] != string1[length-i-1]
        {
            reversed = 1;
            break;
        }
    }

    if (reversed)
    {
        printf("%s is not a palindrome", string1);
    }
    else
    {
        printf("%s is a palindrome", string1);
    }
    printf("\n\nPRESS ENTER\n");
    system("pause");
    return main();

case 3:
    return exit();
    break;
}
}

int exit()
{
    system("cls");
    printf("======================================================================\n");
    printf("                        G O O D  B Y E :)                           ");
    printf("\n====================================================================");
    printf("\n");
}
