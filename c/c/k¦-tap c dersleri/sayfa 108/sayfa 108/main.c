//
//  main.c
//  sayfa 108
//
//  Created by Sadık Sünbül on 21.10.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50

int main(int argc, const char * argv[])
{
    char metin[SIZE];  //metındekı max sayımız 50 kaarkterlık yer
    
    char* sayiStr1="256";
    char* sayiStr2="558";
    char* sayiStr3="179.25";
    char* sayiStr4="247.32";
    
    int sayi1=atoi(sayiStr1);  //tam sayıya cevırıp topladık
    int sayi2=atoi(sayiStr2);
    
    int toplam1=sayi1+sayi2;
    printf("toplam 1 ->%d\n",toplam1);
    
    int sayi3=atof(sayiStr3);
    int sayi4=atof(sayiStr4);
    
    float toplam2=sayi3+sayi4;
    
    printf("toc",toplam2);
    
    printf("bir karakter dızısı gırınız:\n");
    gets(metin);   //burası metın dızısını yazdırır,
    
    printf("girdiğiniz char dizisindeki sayısal karakterler:");
    
    //burada grıılen metındekı sayısal degerlerı yazdıran program
    
    int i;
    for (i=0; i<SIZE; i++)
    {
        if(metin[i]==0)  //hic deger gırılmedıyse bos gec demek i
            break;
        if(isdigit(metin[i])==1)  //buradaki isdigit metinin içindekı sayıları alıyor metının ıcındekı sayıysa dogru dıyor //dogruysa true ıse altakı kodu oku demek
        {
            printf("%c",metin[i]);
        }
        
    }
    printf("\n");
    
    
    
    return 0;
}
