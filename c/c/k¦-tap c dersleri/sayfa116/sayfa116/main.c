:#include <stdio.h>
#include <math.h>

int main()
{
    int sayi1=5;
    int sayi2=5;
    
    //önce 1 artır sonra atama yap
    
    int İOnceArtirSonuc=++sayi1;
    //once atama yap sonra 1 artır
    int İsonraArtırSonuc=sayi2++;
    
    printf("sayi1=%d\n",sayi1);
    printf("sayi2=%d\n",sayi2);
    
    printf("ionceartırsonucu=%d\n",İOnceArtirSonuc);
    printf("isonraartırsonucu=%d\n",İsonraArtırSonuc);  //ilk once kendısını atar sonra artırrı.
    
    
    printf("------------\n");
    
    int x=9,y=4;
    
    printf("(%d>%d) ->%d\n",x,y,x>y);  //burada en soldakı deger dogrumu yanlısmı onu kontrol eder
    printf("(%d<%d) ->%d\n",x,y,x<y);
    printf("(%d==%d) ->%d\n",x,y,x==y);
    printf("(%d>=%d) ->%d\n",x,y,x>=y);
    printf("(%d<=%d) ->%d\n",x,y,x<=y);
    printf("(%d!=%d) ->%d\n",x,y,x!=y);
    
    int x1=11,y1=5,z=0,zl=0;
    
    //x1 degeri y1 denbuyukse z nın degeri x1 olsun aksı taktırde y olsun
    
    zl=x>y?x:y;  //burdakı deger  dogruysa 1. olanı alır yanı x ı
    
    //x1 degeri y den kucukse z nın değeri x olsun aksi takdirde y1 olsun
    
    zl=x<y?x:y; //deger yanlıssa 2 deger yanı y degerını alır
    
    printf("z:%d\n",z);
    
    printf("zl:%d\n",zl);
    
    
    
    return 0;
}
