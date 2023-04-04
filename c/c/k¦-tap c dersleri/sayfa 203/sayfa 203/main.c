//
//  main.c
//  sayfa 203
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    
    float bakiye=(float)(rand()%2000);
    float cekilecek=0;
    float limit=500;
    
    printf("su ankı bakıyenız:%.2f\n",bakiye);
    printf("ltfen cekmek ıstedıgınız mıktarı gırınız:");
    scanf("%f",&cekilecek);
    
    if(cekilecek<=bakiye&&cekilecek<=limit)
    {
        bakiye=bakiye-cekilecek;
        printf("cekılecek para mıktarı:%.2f\n",cekilecek);
        printf("kalan para mıktarı:%.2f\n",bakiye);
        
    }
    else
    {
        if(cekilecek>bakiye)
        {
            printf("hesabınızda yeterlı mıktarda bakıye yok \n");
        }
        if(cekilecek>limit)
        {
            printf("cekmek ıstedıgınız mıktar , cekım lımıtınızı asıyor \n");
        }
    }
    
    printf("programı sonlarndır\n");
    
    
    
    return 0;
}
