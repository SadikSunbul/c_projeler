//
//  main.c
//  sayfa 325 karakterler strıng
//
//  Created by Sadık Sünbül on 26.10.2022.
//

#include <stdio.h>
#include <string.h>  //bu kutuphane puts ve gets lerı olusturur

//strlen

int main(int argc, const char * argv[])
{
   // char isim[ ]="mehmet";
   // char *isim="mehmet";
   // char isim[]={"m","e","h","m","e","t","\n"};  //tek tırnak bunlar  bunların hepsı aynı sey demek
    
    char kelime[10];
    //puts foksıyonu printf e benzer
    puts("bır kelıme gırınız:");
    //kullanıcıdan kelıme oku ve kelıme ısımlı dızıye kopyala
    gets(kelime);  //scanaf gorevı yapar dırekt dızıye yazdırır
    
    puts("asağıdakı kelımeyı gırdınız:");
    //kelıme ısımlı karakter dızısının degerını ekrana bas
    
    puts(kelime);
    
    char iller [3][10]={"ankara","ıstanbul","izmir"};
    //burada 3 dedıgımız arryın elaman sayısı 10 ıse elemanların max karakter saısı 10 olsun dedi
    
    int i;
    for (i=0; i<3; i++)
    {
        puts(iller[i]);
    }
    
    const char *cp = "Bilgisayar";
        int ret;

        ret = strlen(cp);  //strlen dedıgımız deger cp dekı dızının uzunlugunu gosterıyor.

        printf("%s karakter dizisinin uzunluğu: %d\n", cp, ret);
    
  
    return 0;
}
