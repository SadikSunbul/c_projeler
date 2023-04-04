#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main(){
    //aynı tıptekı verılerı sıralı sekılde tutmaya yarıyor  1. eleman 0. index
 srand(time(NULL));

    int sayiDizisi[10]={1,2,3,4,5}; //bu atama yontemı pek kullanılmaz
    int i;
    for ( i = 0; i < 10; i++)
    {  
        sayiDizisi[i]=pow(i,2);
        printf("%d. eleman %d \n",i+1,sayiDizisi[i]);
    }
    printf("-------------\n");
    int toplam=0,ortalama,enbuyuk,enkucuk;
    for ( i = 0; i < 10; i++)
    {
        sayiDizisi[i]=rand()%100;
        printf("%d. eleman %d \n",i+1,sayiDizisi[i]);
    }
     for ( i = 0; i < 10; i++)
    {
        toplam+=sayiDizisi[i];
        printf("%d. eleman eklendi ve yeni toplam:%d\n",i+1,toplam);
    }
    enbuyuk=sayiDizisi[0];
    enkucuk=sayiDizisi[0];
    for ( i = 0; i < 10; i++)
    {
        if(sayiDizisi[i]>enbuyuk){
            enbuyuk=sayiDizisi[i];
        }
        if(sayiDizisi[i]<enkucuk){
            enkucuk=sayiDizisi[i];
        }
    }
    printf("dızının en buyuk elemanı:%d\n",enbuyuk);
    printf("dızının en kucuk elemanı:%d\n",enkucuk);
    
    



    /*
    printf("dizinin 1. elemanın adresi:%#X\n",&sayiDizisi[0]);
    printf("dizinin 1. elemanın adresi:%#X\n",&sayiDizisi[6]);

    sayiDizisi[0]=1;
    sayiDizisi[1]=2;

    printf("0. ındex degeri:%d\n",sayiDizisi[0]);
    printf("1.index degeri :%d\n",sayiDizisi[1]);
*/


    return 0;
}