//
//  main.c
//  sayfa 90
//
//  Created by Sadık Sünbül on 18.10.2022.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

void artirNormal(void);
void artirStatic(void);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("sıgnet char verı tıpının mın degerı:%d\n",SCHAR_MIN);
    printf("sıgnet short veri tipinin min değeri:%d\n",SHRT_MIN);
    
    printf("float veri tipinin min degeri%.5g\n",FLT_MIN);
    //const  veritipinini 1 kere atar ve hıc bır zaman degıstırılmez hep o kalır mesela pi sayısı degısmez hep sabıt gıbı
    
    const int sabitsayi=10;  //burdakı sayı degıstırılemezn  altta bı yerde degıstırılme yaparsa hata verır
    
    printf("----------------\n");
    
    int sayi1=5,sayi2=10;
    //sayı 1 ve sayı 2 adreslerını işaretçi değişkenlere ata
    int * restrict ptr1;
    int * restrict ptr2;
    //sayıların değerlerını ata
    ptr1=&sayi1;
    ptr2=&sayi2;
    //sayıların degerlerını yazdır
    printf("sayi1=%d, sayi2=%d\n",sayi1,sayi2);
    *ptr1=*ptr1+2;
    *ptr2=*ptr2+2;
    *ptr1=*ptr1+10;
    
    //sayıların degerlerını tekrar yazdır
    
    printf("sayı1=%d,sayı2=%d\n",sayi1,sayi2);
    
    //burası sımılasyon
    //# include "diğerdosyalar.h" kendımızın onceden yaptıgımız bır dosya ıcınde sayı1=5 ve sayı2=7 olsun
    // extern int sayı1;     buradakı extern alıyor sayıyyı
    // extern int sayı2;
    //int main(){ printf("sayı1:%d,sayı2:%d\n",sayı1,sayı2);  return 0;}
    // output sıystem sayı1=5  sayyı2=7
    
    printf("--------------\n");
    printf("normal değısken ornegı :\n");
    printf("--------------\n");
    artirNormal();  //burada normalde oncekı verıler sılındıgınden hep 0 cıktısı alınır
    artirNormal();
    artirNormal();
    
    printf("-------------\n");
    printf("static degısken ornegı:\n");
    artirStatic();  //burada il 0 çıktısı alınır
    artirStatic();    //burada öncekı verı tutuldugundan dolayı +1 olur ve 1 degerı yazar burda
    artirStatic();    //burada oncekı verı tutuuyordu 1 dı +1 ekleyınce 2 oluyor 
    
    
    
    
    return 0;
}

void artirNormal(void)
{ //x değişkeni static tanımlanmadığından her çağırıldığında x değeri sıfırlanır
    int x=0;
    printf("%d\n",x);
    x=x+1;
    
}
void artirStatic(void)
{  // x eğişkeni static olarak tanımlandıgından tekrar cagrıldıgında oncekı degerı kaybetmez
    static int x=0;
    printf("%d\n",x);
    x=x+1;
}

