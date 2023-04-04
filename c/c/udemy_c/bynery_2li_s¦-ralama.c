#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int dizi[10],i,j,indexküçüksayi,enküçüksayi;
srand(time(NULL));

for ( i = 0; i < 10; i++)
{
    dizi[i]=rand()%100;
    printf("%d\t",dizi[i]);
}

for ( i = 0; i <9; i++)//eleman sayısı -1 
{
    enküçüksayi=dizi[9];
    indexküçüksayi=9;
    for ( j = i; j<9 ; j++) //enkucu sayııyı bulduk
    {
        if (dizi[j]<enküçüksayi)
        {
            enküçüksayi=dizi[j];
            indexküçüksayi=j;
        }
    }
dizi[indexküçüksayi]=dizi[i];
dizi[i]=enküçüksayi;
    
}
printf("-----sıralıdızı----");
for ( i = 0; i < 10; i++)
{
    dizi[i]=rand()%100;
    printf("%d\t",dizi[i]);
}

// 1 3 8 24 46 57 68 79 90 110 --> aranan sayı 53
//sol ındex    ortanca       sagındex 
int ortanca,sol,sağ;
sol=0;
sağ=9; //index numaraları
int araanansayı;
printf("lütfen aradıgınız sayıı gırınız:");
scanf("%d",&araanansayı);
while (sol<=sağ)
{
    ortanca=(sağ+sol)/2;
    if (araanansayı==dizi[ortanca])
    {
        printf("aranan sayı bulundu");
        break;
    }else if(araanansayı>dizi[ortanca]){
        sol=ortanca+1;
    }else{
        sağ=ortanca-1;
    }
    
}



    return 0;
}