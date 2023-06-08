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
//Basit�e her ad�mda dizideki en k���k say�n�n nerede oldu�u bulunur. Bu say� ile dizinin ba��ndaki say� yer de�i�tirilerek en k���k say�lar se�ilerek ba�a at�lm�� olur.

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
