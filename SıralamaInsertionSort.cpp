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
{ //Insertion sort
//Her adým da bir elemaný kendinden önceki elemanlar ile karþýlaþtýrarak uygun deðiþiklikleri yaparak iþleyen bir algoritmadýr. 

int i,j,tmp;

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

//Insetion short islemi 

for(i=0;i<20-1;i++)
{
	j=i;
	while(j>0 && dizi[j-1]>dizi[j]){
		tmp=dizi[j];
		dizi[j]=dizi[j-1];
		dizi[j-1]=tmp;
		j--;
	}
	
}

	for(int i=0;i<20;i++)
	{
	printf("%d-",dizi[i]);
	}

return 0;
}
