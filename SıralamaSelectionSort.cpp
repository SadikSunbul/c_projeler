#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp,int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

int main()
{ //selection sort
//Basitçe her adýmda dizideki en küçük sayýnýn nerede olduðu bulunur. Bu sayý ile dizinin baþýndaki sayý yer deðiþtirilerek en küçük sayýlar seçilerek baþa atýlmýþ olur.

int i,j,min_index;

int dizi[20];
for(int i=0;i<20;i++)
	{
		dizi[i]=rand()%10;
	}
	for(int i=0;i<20;i++)
	{
	printf("%d-",dizi[i]);
	}
	printf("\n");

//selection short islemi 

for(i=0;i<20-1;i++)
{
	min_index=i;
	for(j=i+1;j<20;j++)
	{
		if(dizi[j]<dizi[min_index])
		{
			min_index=j;
		}
	}
	int temp=dizi[min_index];
	dizi[min_index]=dizi[i];
	dizi[i]=temp;
}

	for(int i=0;i<20;i++)
	{
	printf("%d-",dizi[i]);
	}

return 0;
}
