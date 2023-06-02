#include <stdio.h>
#include <stdlib.h>


struct OGRENCI{
	int ogrno;
	int vize;
	int final;
	struct OGRENCI *sonraki;
};

struct OGRENCI *Push(struct OGRENCI *top,int ogrno,int vize,int final) //Ekleme ýslemý 
{
	struct OGRENCI *yeni=(struct OGRENCI*)malloc(sizeof(struct OGRENCI*)); //yer ayýrdýk 
	//edgerler eklendi
	yeni->ogrno=ogrno;
	yeni->vize=vize;
	yeni->final=final;
	yeni->sonraki=NULL;
	
	if(top==NULL) //hýc kayýt yok ýse burada ýlk kayýtý eklerýz 
	{
		top=yeni;
		return top;
	}else //kayýt var ýse onceden buraya gýrp 
	{
		yeni->sonraki=top; //yený kaydýn sonrakýsýne var olan dýzýnýn son elemaný verýlýr 
		return yeni; //donerýz bunu 
	}
}

struct OGRENCI *Pop(struct OGRENCI *top,int *ogrno,int *vize,int *final) //Cýkarma ýslemý 
{
	if(top==NULL) //top yok ýse ya hata donerýz  yada null donebýlýrýz 
	{
		// hata fýrlatýal býlýr 
		ogrno=NULL;
		vize=NULL;
		final=NULL;
		return top;
	}else{ //lýste bos degýlse buraya gýrýcez
		struct OGRENCI *gecici; // gecýcýyý sýlýcez ondan burda tutucaz
		gecici=top; //gelen en usteký degerý verdýk 
		
		//verýler okunuytor buradan sýlmeden once degerlerý elde ettýk 
		*ogrno=gecici->ogrno; 
		*vize=gecici->vize;
		*final=gecici->final;
		
		
		top=top->sonraki; //top un bý sonrakýsý yaný bý altýndakýný atadýk buraya 
		free(gecici);//gecýcýyý sýldýk 
		
		return top; //gerý donduk 
	}
}

int main()
{
	
	struct OGRENCI *top =NULL;
	int ogrno,vize,final;
	
	for(int i=0;i<3;i++) //degerlerý ekledýk
	{
		printf("%d ogrencý ---------------------------------->\n",i+1);
		printf("Vize notu: "); scanf("%d",&vize);
		printf("Final notu: "); scanf("%d",&final);
		top=Push(top,i+1,vize,final);
	}
	
	printf("\n\n");
	
	for(int i=0;i<3;i++) //degerlerý okuyarak sýldýk 
	{
		top=Pop(top,&ogrno,&vize,&final);
		printf("ogrno:%d , vize/final : %d/%d \n",ogrno,vize,final);
	}
	
	return 0;
}
