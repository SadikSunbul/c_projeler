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
	
	for(i=0;i<n-1;i++) //dýsta donuyoz ýlk 0. eleman ýle hepsýný kontrol edýyoz sonra 1 e gecýyo gýbý 
	{
		for(j=0;j<n-i-1;j++) 
		{
			if(dizi[j]>dizi[j+1])  //soldaký deger sagdakýnden buyukse yer degýstýrme ýselmý yap dedýk 
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
