//
//  main.c
//  sayfa 263 dzılerde sırlı arama
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int aranansayı;
    int dizi[15]={2,7,23,67,123,9,21,0,124,789,34,8,1235,14,5};
    int bulundu=0;
    
    printf("dızı ıcınde arıyacagınız sayıyı gırınız:");
    scanf("%d",&aranansayı);
    
    int i;
    for (i=0; i<15; i++)
    {
        if(dizi[i]==aranansayı)
        {
            bulundu=1;
            break;
        }
    }
    //if(bulundu==1) asagıdakıyle aynı 
    if(bulundu)
        printf("bulundu: Dizinin %d.elemanın aranan degerı esıt.\n",i);
    else
        printf("aradıgıız eleman dızıde bulunmadı!\n");
    
    
    
    
    
    
    
    return 0;
}
