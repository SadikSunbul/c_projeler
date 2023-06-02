#include <stdlib.h>
#include <stdio.h>


struct Ogrenci{  
	int no;
	int vize;
	int final;
	struct Ogrenci *sonraki;
};
  
struct Ogrenci *Enqueue(struct Ogrenci *ilk,int no,int vize,int final)   //Ekleme ýslemýnýn yapýldý yer 
 {
 	struct Ogrenci *yeni=(struct Ogrenci*)malloc(sizeof(struct Ogrenci *));  //yer ayýrýdk 
 	
 	
 	//doldurduk 
 	yeni->final=final;
 	yeni->no=no;
 	yeni->vize=vize;
 	yeni->sonraki=NULL;  //sonraký bos olsun dedýk 
 	
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
 
 struct Ogrenci *Dequeue(struct Ogrenci *ilk,int *no,int *vize,int *final) //kuyruktan cýakrma cýkarken býlgýlerýde alma 
 {
 	if(ilk==NULL) //hýc býsey yoksa hata vey anull don 
 	{
 		no=NULL;
 		vize=NULL;
 		final=NULL;
 		return ilk;
	 }else	 //dolu ýse 
	 {
	 	struct Ogrenci *gecici; 
	 	gecici=ilk; //ilk degerý saklýyoruz 
	 	
	 	
	 	//verileri aldýk 
	 	*no=gecici->no;
	 	*vize=gecici->vize;
	 	*final=gecici->final;
	 	
	 	//ilk den sonrakýne gectýk artýk  artýk yený ýlk bu 
	 	ilk=ilk->sonraki;
	 	free(gecici); //gecýcýyý sýldýk 
	 	return ilk;
	 }
 }

int main()
{
	
	struct Ogrenci *ilk=NULL;
	
	int no,vize,final;
	
	for(int i=0;i<3;i++)
	{
	printf("%d ogrencý -----------------------\n",i+1);
	printf("Vize Notu:"); scanf("%d",&vize);	
	printf("Final Notu:"); scanf("%d",&final);
	
	ilk=Enqueue(ilk,i+1,vize,final);  //degrý ekledýk 
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++)
	{ 
		ilk=Dequeue(ilk,&no,&vize,&final);  //degerlerý okuayark sýldýk
		printf("ogr:%d vize/final : %d/%D \n",no,vize,final);   
	}
	
	
	
	return 0;
}
