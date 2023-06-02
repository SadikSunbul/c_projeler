#include <stdlib.h>
#include <stdio.h>

struct Ogrenci{  
	int no;
	
	struct Ogrenci *sonraki;
};
  
struct Ogrenci *Enqueue(struct Ogrenci *ilk,int no)   //Ekleme �slem�n�n yap�ld� yer 
 {
 	struct Ogrenci *yeni=(struct Ogrenci*)malloc(sizeof(struct Ogrenci *));  //yer ay�r�dk 
 	
 	
 	//doldurduk 
 	
 	yeni->no=no;
 	
 	
 	if(ilk==NULL) //h�c  b�sey yoksa drekt atad�k 
 	{
 		ilk=yeni;
 		return ilk;
	 }else	{  //doolu �se 
	 	struct Ogrenci *gecici=ilk; //gec�c�ye ald�k deger� 
	 	
	 	while(gecici->sonraki!=NULL) //gec�c��le sonrak� deger� null olanu� bulduk 
	 	{
	 		gecici=gecici->sonraki; //b� �ler� g�t ded�k 
		 }
		 
		 gecici->sonraki=yeni; //bulunan sonrak� deger� null olan yere yen� deger atand� 
		 return ilk;  //ger�ye donduk 
	 }
 	
 }
 
 struct Ogrenci *Dequeue(struct Ogrenci *ilk,int *no) //kuyruktan c�akrma c�karken b�lg�ler�de alma 
 {
 	if(ilk==NULL) //h�c b�sey yoksa hata vey anull don 
 	{
 		no=NULL;
 		
 		return ilk;
	 }else	 //dolu �se 
	 {
	 	struct Ogrenci *gecici; 
	 	gecici=ilk; //ilk deger� sakl�yoruz 
	 	
	 	
	 	//verileri ald�k 
	 	*no=gecici->no;
	 	
	 	
	 	//ilk den sonrak�ne gect�k art�k  art�k yen� �lk bu 
	 	ilk=ilk->sonraki;
	 	free(gecici); //gec�c�y� s�ld�k 
	 	return ilk;
	 }
 }



int main()
{
	
	struct Ogrenci *ilk=NULL,*gecici=NULL,*onceki=NULL,*yeni=NULL;
	
	int devam=1;
	
	while(devam==1)
	{
		struct Ogrenci *yeni=(struct Ogrenci *)malloc(sizeof(struct Ogrenci *));
		printf("De�er :");
		scanf("%d",&yeni->no);
		yeni->sonraki=NULL;
		
		if(ilk==NULL)
		{
			ilk=yeni;			
		}else if(ilk->no > yeni->no )	//yen� deger �lk den kucukse basa eklen�r �lk deg�s�r 
		{
			yeni->sonraki=ilk;
			ilk=yeni;
		}else{
			onceki=ilk;
			gecici=ilk->sonraki;
			while(gecici=NULL)
			{
				if(gecici->no<yeni->no)
				{
					onceki=onceki->sonraki;
					gecici=gecici->sonraki;
				}else{
					break;
				}
			}
			if(gecici==NULL)
			{
				onceki->sonraki=yeni;
			}else
			{
				onceki->sonraki=yeni;
				yeni->sonraki=gecici;
			}
		}
		printf("Devam �c�n 1 e bas�n ");
		scanf("%d",&devam);
		
	}
	
	printf("\n");
	
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("adresi :%x deger : %d ,sonrak� adres :%x \n",gecici,gecici->no,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	
	
	return 0;
}
