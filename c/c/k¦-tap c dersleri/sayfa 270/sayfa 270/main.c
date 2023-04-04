//
//  main.c
//  sayfa 270
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int dizi[20]={3,2,41,52,45,31,22,425,536,25,42,6,35,242,525,32,52436,475,21,564};
    
    int hedef;
    int bulundu=0;
    int solIndıs=0;
    int sagIndıs=24;
    int ortaIndıs=0;
    int tempArray[20];
    int k = 0;

    for (int i = 0; i < 20;) {
        
        for (int j = 0; j < 20; j++) {
            if(dizi[i] == dizi[j]){
                continue;
            }
            else if(dizi[i] < dizi[j]){
                continue;
            }
            else{
                i = j;
                break;
            }
            
            tempArray[k] = dizi[i];
            k++;
        }
    }
    
    
    
    
    
    printf("dızı ıcınde arayacagınız sayıyı gırınız:");
    scanf("%d",&hedef);
    
    while (bulundu==0&&solIndıs<=sagIndıs)  //burda bulunup bulunmadıgını kontrol edıcez
    {
        ortaIndıs=(solIndıs+sagIndıs)/2;   //ortnca ındısı bulduk burdan
        if(hedef==dizi[ortaIndıs]) //dızının ortanca degerı aradıgımız degere esıtmı dır
        {
            bulundu=1;   //esıtse bulundu desın
            break;
        }
        else if(hedef<dizi[ortaIndıs])  //burda hedefımız ortanca degerden kucukse ıcerıyı calıstır demek sonra sagındısı ortanca-1 dedık uste doner buuncaya adar boyle doner
        {
            sagIndıs=ortaIndıs-1;
            
        }
        else if(hedef>dizi[ortaIndıs])
        {
            solIndıs=ortaIndıs+1;
        }
    }
    if(bulundu)
    {
        printf("bulundu: dızının %d. ındısındekı deger aranan eleman esıt.\n",ortaIndıs);
        
    }
    else{
        printf("aradıgınız eleman dızıde bulunamadı!\n");
    }
    
    
    
    
    

    return 0;
}
