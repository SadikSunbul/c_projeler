#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
srand(time(NULL));
int dizi[10];

for (int i = 0; i < 10; i++)
{
    dizi[i]=rand()%100;
    printf("%d\t",dizi[i]);
}

int gecici,i,j;
for ( i = 1; i < 10; i++)
{
    gecici=dizi[i];
    for ( j =i-1 ; j>=0 && gecici<=dizi[j] ; j--)
    {
        dizi[j+1]=dizi[j];
    }
    dizi[j+1]=gecici;
}
printf("\nsıralı dızı\n");
for (int i = 0; i < 10; i++)
{
    printf("%d\t",dizi[i]);
}






    return 0;
}