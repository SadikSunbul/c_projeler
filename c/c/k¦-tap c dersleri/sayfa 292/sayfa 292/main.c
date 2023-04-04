//
//  main.c
//  sayfa 292
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>
int bolunebiliyormu(int,int);
int obebbul(int,int);
int okekbul(int,int);

int main(int argc, const char * argv[])
{
    //iç içe fonksıyon
    int sayı1,sayı2;
    printf("bırıncı sayıyı gırınız:");
    scanf("%d",&sayı1);
    
    printf("ıkıncı sayıyı gırınız :");
    scanf("%d",&sayı2);
    
    int obeb=obebbul(sayı1, sayı2);
    int okek=okekbul(sayı1, sayı2);
    
    printf("obeb(%d,%d)=%d\n",sayı1,sayı2,obeb);
    printf("okek(%d,%d)=%d\n",sayı1,sayı2,okek);
    

    
    
    return 0;
}
int bolunebiliyormu(int bolunen,int bolen)
{
    if(bolunen%bolen==0)
        return 1;
    else
        return 0;
}
int obebbul(int sayi1,int sayi2)
{
    int kucuksayı=sayi1;
    if(sayi2<kucuksayı)
        kucuksayı=sayi2;
    int i;
    for(i=kucuksayı;i>0;i--)
    {
        if(bolunebiliyormu(sayi1, i)==1&&bolunebiliyormu(sayi2, i)==1)
        {
            return i;
        }
    }
    return 0;
}
int okekbul(int sayi1,int sayi2 )
{
    //paremetrelerde kucuk olanı bul
    int buyuksayı=sayi1;
    int kucuksayı=sayi2;
    
    if(sayi2<buyuksayı)
    {
        buyuksayı=sayi2;
        kucuksayı=sayi1;
    }
    //ıkı sayının bolumunde kalan 0 ise buyuk sayı okekdır
    if(bolunebiliyormu(buyuksayı, kucuksayı))
        return buyuksayı;
    //degılse buyuk sayının ıkı katından baslıyarak katlarını bulalım
    //ve bu buyuk sayının her bır katının her ıkı sayıya bolunup bolunmedıgıne bakalım
    int i;
    for (i=buyuksayı*2; ; i+=buyuksayı)
    {
        if(bolunebiliyormu(i, sayi1)==1 && bolunebiliyormu(i, sayi2)==1)
            return i;
    }
    return 0;
}
