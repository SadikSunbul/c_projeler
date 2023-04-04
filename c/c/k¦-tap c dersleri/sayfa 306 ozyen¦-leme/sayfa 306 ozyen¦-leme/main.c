//
//  main.c
//  sayfa 306 ozyenıleme
//
//  Created by Sadık Sünbül on 26.10.2022.
//

#include <stdio.h>
long faktorıyelHesapla(long sayi);    //global degıskendır bu bu tum fonk ve maınde kullanıla bılır
int main(int argc, const char * argv[])
{
    int i;
    printf("döngü yontemıyle ılk 10 sayının faktorıyelı\n");
    for (i=0; i<10; i++) {
        printf("%d!=%d\n",i,faktorıyelHesapla(i));
    }
   
    
    
    return 0;
}


//bır sayının faktorıyelını onyızlemeyle bulan fonksıyon

long faktorıyelHesapla(long sayi)
{
    if(sayi==1 || sayi==0)
        return 1;
    
    long sonuc=sayi*faktorıyelHesapla(sayi-1);
    return sonuc;
}


