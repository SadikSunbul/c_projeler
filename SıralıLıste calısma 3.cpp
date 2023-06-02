#include <stdlib.h>
#include <stdio.h>

struct Ogrenci{  
	int no;
	
	struct Ogrenci *sonraki;
};
  
struct Ogrenci *Enqueue(struct Ogrenci *ilk,int no)   //Ekleme ýslemýnýn yapýldý yer 
 {
 	struct Ogrenci *yeni=(struct Ogrenci*)malloc(sizeof(struct Ogrenci *));  //yer ayýrýdk 
 	
 	
 	//doldurduk 
 	
 	yeni->no=no;
 	
 	
 	if(ilk==NULL) //hýc  býsey yoksa drekt atadýk 
 	{
 		ilk=yeni;
 		return ilk;
	 }else	{  //doolu ýse 
	 	struct Ogrenci *gecici=ilk; //gecýcýye aldýk degerý 
	 	
	 	while(gecici->sonraki!=NULL) //gecýcýýle sonraký degerý null olanuý bulduk 
	 	{
	 		gecici=gecici->sonraki; //bý ýlerý gýt dedýk 
		 }
		 
		 gecici->sonraki=yeni; //bulunan sonraký degerý null olan yere yený deger atandý 
		 return ilk;  //gerýye donduk 
	 }
 	
 }
 
 struct Ogrenci *Dequeue(struct Ogrenci *ilk,int *no) //kuyruktan cýakrma cýkarken býlgýlerýde alma 
 {
 	if(ilk==NULL) //hýc býsey yoksa hata vey anull don 
 	{
 		no=NULL;
 		
 		return ilk;
	 }else	 //dolu ýse 
	 {
	 	struct Ogrenci *gecici; 
	 	gecici=ilk; //ilk degerý saklýyoruz 
	 	
	 	
	 	//verileri aldýk 
	 	*no=gecici->no;
	 	
	 	
	 	//ilk den sonrakýne gectýk artýk  artýk yený ýlk bu 
	 	ilk=ilk->sonraki;
	 	free(gecici); //gecýcýyý sýldýk 
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
		printf("Deðer :");
		scanf("%d",&yeni->no);
		yeni->sonraki=NULL;
		
		if(ilk==NULL)
		{
			ilk=yeni;			
		}else if(ilk->no > yeni->no )	//yený deger ýlk den kucukse basa eklenýr ýlk degýsýr 
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
		printf("Devam ýcýn 1 e basýn ");
		scanf("%d",&devam);
		
	}
	
	printf("\n");
	
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("adresi :%x deger : %d ,sonraký adres :%x \n",gecici,gecici->no,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	
	
	return 0;
}
