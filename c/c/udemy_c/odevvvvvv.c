#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
srand(time(NULL));
int dizi[10];
int i,j;
for ( i = 0; i < 10; i++)
{
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]); 
}

printf("\n");
int temp;

for ( i = 1; i < 10; i++)
{
    temp=dizi[i];
    for ( j = i-1; j>=0 && temp<=dizi[j] ; j--)
    {
        dizi[j+1]=dizi[j];
    }
    dizi[j+1]=temp;
}

printf("\n ----------------\n");
for ( i = 0; i < 10; i++)
{
    printf("%d\t",dizi[i]);
}




    return 0;
}