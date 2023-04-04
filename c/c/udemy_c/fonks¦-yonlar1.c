#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int a=5; //bu bir global değişken oldu  burayaa her yerden ulasabılırız


void selemala(char isim[10]);
int toplaama(int sayı1,int sayı2);
char mytoupper(char ch);
int sayıyazdır(int sayi);
int faktorıyelhesap(int sayi);
int main(){

/*
selemala("ogün");
    
int sonuc=toplaama(3,5);
printf("%d",sonuc);

printf("\n%c\n",mytoupper('a'));
*/

//öz yenılemelı fonklar

sayıyazdır(10);
printf("%d",faktorıyelhesap(5));



    return 0;

}

//Özyenilemeli fonklar 

int sayıyazdır(int sayi){
    if(sayi==0){ //sayı sıfıra gelınce bıtır burayo dedik...
        return 0;
    }
    printf("%d\n",sayi); //10 yadırdık sonra 9 cagrıldı .....1sayısı yazıldı 1-1=0 icin cagrıldı return 0;dedı ve bitti
    sayıyazdır(sayi-1); 
}

int faktorıyelhesap(int sayi){
    if(sayi==0 || sayi==1){ //burada sayı 0 veya 1 ıse ı dondur dedık 
        return 1; //rikorsıf fonk bıtıren yer burası burada return deıgımı ıcın burası bıtıyor 
    }
    int sonuc=sayi*faktorıyelhesap(sayi-1); //burada kendını cagırdık carptı felan 
    return sonuc; //burda sonucu dondurduk
}

/*
ilk geleen 5
sonuc=5.fak(4)
sonuc=5.4.fak(3)
sonuc=5.4.3.fak(2)
...
...
sonuc=5.4.3.2.1=120
*/



void selemala(char isim[10]){
    printf("merhaba %s\n",isim);
}
int toplaama(int sayı1,int sayı2){
    return sayı1+sayı2;
}

char mytoupper(char ch){
    return ch-32;
}