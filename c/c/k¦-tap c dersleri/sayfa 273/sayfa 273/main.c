//
//  main.c
//  sayfa 273
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])   //burada hata var sayf a274 bakılması gerek  kıtaptan dongulerı kontrol et 
{
    
    int dizi[4]={12,10,9,3};
    int i,j,x;
    
    //dızının sıralaama oncesı halını yazalaım
    printf("sıraladan once kı halı \n:");
    for (i=0; i<4; i++)
    {
        printf("%3d",dizi[i]);
    }
    //sıralama ıslemı burada yapılıyor
    for (i=0; i<3; i++)
    {
        for (j=0; j<3-i; j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                //elemanların yer degıstırmesı swap
                int gecici =dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
                
            }
        }
        //her ıterasyonda aldıgı durumu yadıralım
        printf("%d. Iterasyon\n",i);
        for (i=0; i<4; i++)
        {
            printf("%3d",dizi[i]);
        }
    }
    
    
    return 0;
}
