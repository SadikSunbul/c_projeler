//
//  main.c
//  sayfa 249 arrayler
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int sayılar[5]={[0 ... 4]=5};  //burada elemanlarınhepsıne 5 sayısını atıycagımız ıcın tek tek atmak yerıne kolay yontemle atama yaptık
    
    printf("%d",sayılar[4]);
    
    printf("\n");
    printf("---------\n");
    int saılar1[5]={[0 ... 1]=5,[3 ... 4]=10};  //burada 0 dan 1 e kadar olan sayıları 5 e atadık 3 ten 4 e kadar olan sayıları 10 a atadık burda 2 ye atama yapmasık onu kendısı otamatık olarak 0 a atadı
    printf("%d\n",saılar1[2]);
    printf("%d\n",saılar1[4]);
    printf("%d\n",saılar1[1]);
    printf("-------------\n");
    
    int teksayılar[10]={1,3,5,7,9,11,13,15,17,19};
    int i;
    for (i=0; i<10; i++)
    {
        printf("tek sayılar[%d]=%d\n",i,teksayılar[i]);
        
    }
    int toplam=0;
    i=0;
    do {
        toplam+=teksayılar[i];
        i++;
    } while (i<=9);
    printf("dızının elemanlarının toplmaı :%d",toplam);
    
    
    int dızı[5];  //burada boır dızı tanımladık
    
    for (i=0; i<5; i++)  //dızının elemanlarını kullanıcının gırmesı ıcın buradakı for dongusunu kullanıcaz
    {
        printf("\n dızının %d.elemanı giriniz:",i+1);  //i+1 dedık cunku dızı sayısı 1 den baslar dızı 0 der
        scanf("%d",&sayılar[i]); //burdada tek tek elemanları gırmemız
    }
    
    
    
    
    return 0;
}
