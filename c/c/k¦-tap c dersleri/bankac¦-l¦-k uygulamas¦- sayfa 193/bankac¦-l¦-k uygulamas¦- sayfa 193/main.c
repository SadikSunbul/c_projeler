//
//  main.c
//  bankacılık uygulaması sayfa 193
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    //rastgele sayı uretmek ıcın baslangıc sayısını zamana bagla
    
    srand(time(NULL));  //buarada srand rastgele sayı atamanızı saglayan baslangıc degerını vermemızı saglar zamana baglı olarak degerı degıstırır
    float bakiye=(float) (rand()%5000); //bakıye rand rastgele sayı uretır &5000 dedıgımız max 5000 degerınde sayı uretsın der
    float cekilecek=0;
    
    printf("su ankı bakıyenız :%.2f\n",bakiye);
    printf("lutfen cekmek ısteıgınız mıktarı gırınız:");
    scanf("%f",&cekilecek);
    
    if(cekilecek<=bakiye) //burda bakıyeyı sorguluyor orn paran 5 tl ama 10 tl cekmek ıstıyorsun ıslemı durduruyor
    {
        bakiye=bakiye-cekilecek; //burda okalan bakıyeyı gorebılmek ıcın cıkarma yapılıyor
        printf("cekılecek para mıktarı:%.2f\n",cekilecek);
        printf("kalan para miktarı :%.2f\n",bakiye);
    }
    
    printf("program sonlandı\n");
    
    
    
    
    return 0;
}
