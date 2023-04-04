//
//  main.c
//  sayfa 336
//
//  Created by Sadık Sünbül on 26.10.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{//strcmp
    //int strcmp(const  char *s1,const cahr *s2);
    //s1=s2 ise 0 doner
    //ilk arguman alfabetık olarak ıkıncı argumandan once gelıyorsa 0 dan kucuk deger doner
    //ilk arguman alfabetık olarak ıkıncı argumandan sonra gelıyorsa 0 dan buyuk degerler doner
    
    char dogrucevap[ ]="ankara";
    char cevap[20];
    printf("turkıyenın baskentı hangı ılımızdır:");
    scanf("%s",cevap);
    
    if(strcmp(cevap, dogrucevap)==0)
    {
        printf("cevabınız dogru tebrıkler\n");
    }
    else
    {
        printf("cevabınız yanlıs tekrar deneyınız...\n");
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
