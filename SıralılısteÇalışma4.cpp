#include <stdlib.h>
#include <stdio.h>


struct Ogrenci{  
	int no;
	int vize;
	int final;
	struct Ogrenci *sonraki;
};
  
struct Ogrenci *Enqueue(struct Ogrenci *ilk,int no,int vize,int final)   //Ekleme �slem�n�n yap�ld� yer 
 {
 	struct Ogrenci *yeni=(struct Ogrenci*)malloc(sizeof(struct Ogrenci *));  //yer ay�r�dk 
 	
 	
 	//doldurduk 
 	yeni->final=final;
 	yeni->no=no;
 	yeni->vize=vize;
 	yeni->sonraki=NULL;  //sonrak� bos olsun ded�k 
 	
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
 
 struct Ogrenci *Dequeue(struct Ogrenci *ilk,int *no,int *vize,int *final) //kuyruktan c�akrma c�karken b�lg�ler�de alma 
 {
 	if(ilk==NULL) //h�c b�sey yoksa hata vey anull don 
 	{
 		no=NULL;
 		vize=NULL;
 		final=NULL;
 		return ilk;
	 }else	 //dolu �se 
	 {
	 	struct Ogrenci *gecici; 
	 	gecici=ilk; //ilk deger� sakl�yoruz 
	 	
	 	
	 	//verileri ald�k 
	 	*no=gecici->no;
	 	*vize=gecici->vize;
	 	*final=gecici->final;
	 	
	 	//ilk den sonrak�ne gect�k art�k  art�k yen� �lk bu 
	 	ilk=ilk->sonraki;
	 	free(gecici); //gec�c�y� s�ld�k 
	 	return ilk;
	 }
 }

int main()
{
	
	struct Ogrenci *ilk=NULL;
	
	int no,vize,final;
	
	for(int i=0;i<3;i++)
	{
	printf("%d ogrenc� -----------------------\n",i+1);
	printf("Vize Notu:"); scanf("%d",&vize);	
	printf("Final Notu:"); scanf("%d",&final);
	
	ilk=Enqueue(ilk,i+1,vize,final);  //degr� ekled�k 
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++)
	{ 
		ilk=Dequeue(ilk,&no,&vize,&final);  //degerler� okuayark s�ld�k
		printf("ogr:%d vize/final : %d/%D \n",no,vize,final);   
	}
	
	
	
	return 0;
}
