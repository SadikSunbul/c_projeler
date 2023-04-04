#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

char dizi1[10];
char dizi2[10];
printf("dızı 1 ı gırınız:");
scanf("%s",dizi1);
printf("doızı 2 yı gırınız:");
scanf("%s",dizi2);
int devamedilecekindex;
int dizi1uzunluk=strlen(dizi1);
int dizi2uzunluk=strlen(dizi2);
int i=0,j=0,sorgu;

while (dizi1[i]!='\0')
{
        i=devamedilecekindex;
        j=0;
        sorgu=1;
    while (dizi2[j]!='\0')
    {
    if (dizi1[i]!=dizi2[j])
    {
        sorgu=0;
        break;
    }
    i++;
    j++;
    }
    if(sorgu){
        printf("girdiğiniz 2.strıngın 1. ıcınde bulundugunu tespıt ettık");
    }
    devamedilecekindex++;
}




    return 0;
}