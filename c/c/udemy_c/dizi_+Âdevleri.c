#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int dizi[5][5];
int dizi2[5][5];
int toplamdizi[5][5];
int i,j;
int toplamsatır;
int toplamsutun;
srand(time(NULL));

printf("matris1:\n");
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 5; j++)
    {
        dizi[i][j]=rand()%10;
        dizi2[i][j]=rand()%10;
        printf("%d\t",dizi[i][j]);
    }
    printf("\n"); 
}
printf("matris2:\n");
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 5; j++)
    {
       
        printf("%d\t",dizi2[i][j]);
    }
    printf("\n"); 
}
/* burası satır ve surtunların toplamının bulma...
for ( i = 0; i < 5; i++)
{
    toplamsatır=0;
    toplamsutun=0;
    for ( j = 0; j < 5; j++)
    {
       toplamsatır+=dizi[i][j]; //satır sayısı sabıtken stun degısıcek burada ve topluycak yana dogru degerlerı toplar
       toplamsutun+=dizi[j][i]; //burada sutun sabıtken satır sayısı ddegısıcek
    }
    printf("%d. satırının toplamı:%d \n",i+1,toplamsatır);
    printf("%d.stunun toplamı:%d\n\n",i+1,toplamsutun);
    
}*/
printf("toplam matris:");
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 5; j++)
    {
      toplamdizi[i][j]=dizi[i][j]+dizi2[i][j]; //burada 1 dızın 00 ıle dızı2 nın 00 degerlerı tooplandı
      printf("toplam matrıs :%d \n",toplamdizi[i][j]);
    }
    printf("\n"); 
}



    return 0;
}