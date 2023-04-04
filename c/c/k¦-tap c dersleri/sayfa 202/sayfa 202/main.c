//
//  main.c
//  sayfa 202
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    float bakiye =(float)(rand()%2000);
    float cekılecek=0;
    float limit=500;
    
    printf("su ankı bakıyenız.%.2f\n",bakiye);
    printf("lutfen cekmek ıstedıgınz mıktarı gırınız:");
    scanf("%f",&cekılecek);
    
    if(cekılecek<=bakiye&&cekılecek<=limit)
    {
        bakiye=bakiye-cekılecek;
        printf("cekılecek para mıktarı:%.2f\n",cekılecek);
        printf("kalan para mıktarı:%.2f\n",bakiye);
    }
    else
    {
        printf("hesabınızda yeterlı mıktarda bakıye yok ");
        printf("veya cekmek ıstedıgınız mıktar ıslem lımıtınızden fazla!!\n");
    }
    
    printf("program sonlandı \n");
    
    
    
    
    return 0;
}
