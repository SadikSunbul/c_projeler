//
//  main.c
//  sayfa 300 odevı
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>
#define NOTSAYISI 10

void kullanıcıdanNotlarıOku(int notlar[],int sayi);
double ortalamaBul(int notlar[],int sayi);

int main(int argc, const char * argv[])
{
    int notlar[NOTSAYISI];
    kullanıcıdanNotlarıOku(notlar,NOTSAYISI);  //alttab sayıı dedıgımızın yerıne 10 yazmıs olduk gıbı oldu burda
    double ortalama=ortalamaBul(notlar, NOTSAYISI);
    printf("gırdıgınız degerleın ortalaması:%.2f\n",ortalama);
    
    
    
    return 0;
}


void kullanıcıdanNotlarıOku(int notlar[],int sayi)
{
    int i;
    for (i=0; i<sayi; i++)
    {
        printf("%d.sayıyı gırınız:",i+1);
        scanf("%d",&notlar[i]);
    }
}

double ortalamaBul(int notlar[],int sayi)
{
    double toplam=0;
    int i;
    for (i=0; i<sayi; i++)
    {
        toplam+=notlar[i];
    }
    return (double)toplam/(double)sayi;
}
