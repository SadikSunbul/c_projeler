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
{
	srand(time(NULL));
	
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
	
	int i,j,n=20;
	
	for(i=0;i<n-1;i++) //d�sta donuyoz �lk 0. eleman �le heps�n� kontrol ed�yoz sonra 1 e gec�yo g�b� 
	{
		for(j=0;j<n-i-1;j++) 
		{
			if(dizi[j]>dizi[j+1])  //soldak� deger sagdak�nden buyukse yer deg�st�rme �selm� yap ded�k 
			{
			//	swap(&arr[j],&arr[j+1]);
				int temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<20;i++)
	{
	printf("%d-",dizi[i]);
	}
	
	return 0;
}
