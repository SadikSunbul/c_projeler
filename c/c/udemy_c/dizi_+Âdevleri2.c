#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //bynerı 2 lı arama 

/* 
7 3 5 8 2 9 15 6 dogrusal arama tek tek dener
*/
/*
int dizi[10],i,aranandeğer,bulundumu=0;//bulunursa 1 ata 
srand(time(NULL));
printf("dizi\n");
for ( i = 0; i < 10; i++)
{
    dizi[i]=rand()%100;
    printf("%d\t",dizi[i]);
}
printf("lütfen aranacak olan kelımeyı gırınız:");
scanf("%d",&aranandeğer);

for ( i = 0; i < 10; i++)
{
    if (dizi[i]==aranandeğer)
    {
        bulundumu=1;
        break;
    }
    
}
if (bulundumu)
{
    printf("degerınız bulundu");
}else {
    printf("deger bulunamadı");
}
*/



//araya sokma algorıtması     7  3  5  8  2

int dizi[10],i,j,eleman;
srand(time(NULL));
for ( i = 0; i < 10; i++)
{
    dizi[i]=rand()%100;
    printf("%d \t",dizi[i]);
}
/*
printf("sıralı dızı\n");
for ( i = 1; i <10; i++) //hep 1. indexten baslıyorduk ondan 
{
    eleman=dizi[i]; //herzaman boyle olucak i artarken artcak
    for ( j = i-1; j >=0 && eleman<=dizi[j]; j--) //burada sart hep 1 oncekı elemanı dıger sart j. eleman i.elemandan dahda buyuk olması bu sart saglanırsa kaydırma ıslemı uygulanır
    {
        dizi[j+1]=dizi[j];
    }
    dizi[j+1]=eleman;//bos burası kalmıstı ondan buraya yazdık
    
}
for ( i = 0; i < 10; i++)
{
    
    printf("%d \t",dizi[i]);
}
*/

//kabarcık sıralama   her ıtarasyondan sonra sondakı bır basamak yerını buluyor

for ( i = 0; i < 9; i++)
{
    for ( j = 0; j < 9-i; j++)
    {
        if (dizi[j]>dizi[j+1])
        {
            int gecici=dizi[j];
        dizi[j]=dizi[j+1];
        dizi[j+1]=gecici;
        }
        
        
    }
    
}
printf("\n");
for ( i = 0; i < 10; i++)
{
    
    printf("%d \t",dizi[i]);
}






    return 0;
}