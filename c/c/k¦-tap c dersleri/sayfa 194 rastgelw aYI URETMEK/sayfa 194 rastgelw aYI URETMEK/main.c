//
//  main.c
//  sayfa 194 rastgelw aYI URETMEK
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
 
    srand(time(NULL)); //bunu yazdıgımız ıcın her calıstıgında farklı sayı gelıcekk 
    
    unsigned int sayi1=rand();   //unsıgned sadece pozıtıf tam sayıları alır  her calıstıgında aynı degerı verır cunku baslangıc noktası degısmıyor ve baslangıc noktasından bellı bır mıktar uzaklastırıyor bunu ayarlıya bılmek ıcın srand derız (1) 1 en basla demek bununda tamamen farklı sayılar uretmek ısterek bunu zaman metoduna baglamak lasım zaman sureklı degısır ve yıl ayıda gunude aldıgında hep farklı bır syı gelıcektır
    
    

    unsigned int sayi2=rand();
    unsigned int sayi3=rand();
    
    printf("saui1=%u\n,sayı2=%u\n,sayı3=%u\n",sayi1,sayi2,sayi3);
    
    
//    int tohum =time (NULL);
    //bu  degerı rastgele sayı olusturmakıcın tohum olarak kullan
//    srand(tohum);
    
    //yukarıdakı satırı kısa olarak soylede yazabılırız
    
//    srand(time(NULL));
    
    
    
    
    return 0;
}
