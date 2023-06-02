#include <stdio.h>
#include <stdlib.h>


struct OGRENCI{
	int ogrno;
	int vize;
	int final;
	struct OGRENCI *sonraki;
};

struct OGRENCI *Push(struct OGRENCI *top,int ogrno,int vize,int final) //Ekleme �slem� 
{
	struct OGRENCI *yeni=(struct OGRENCI*)malloc(sizeof(struct OGRENCI*)); //yer ay�rd�k 
	//edgerler eklendi
	yeni->ogrno=ogrno;
	yeni->vize=vize;
	yeni->final=final;
	yeni->sonraki=NULL;
	
	if(top==NULL) //h�c kay�t yok �se burada �lk kay�t� ekler�z 
	{
		top=yeni;
		return top;
	}else //kay�t var �se onceden buraya g�rp 
	{
		yeni->sonraki=top; //yen� kayd�n sonrak�s�ne var olan d�z�n�n son eleman� ver�l�r 
		return yeni; //doner�z bunu 
	}
}

struct OGRENCI *Pop(struct OGRENCI *top,int *ogrno,int *vize,int *final) //C�karma �slem� 
{
	if(top==NULL) //top yok �se ya hata doner�z  yada null doneb�l�r�z 
	{
		// hata f�rlat�al b�l�r 
		ogrno=NULL;
		vize=NULL;
		final=NULL;
		return top;
	}else{ //l�ste bos deg�lse buraya g�r�cez
		struct OGRENCI *gecici; // gec�c�y� s�l�cez ondan burda tutucaz
		gecici=top; //gelen en ustek� deger� verd�k 
		
		//ver�ler okunuytor buradan s�lmeden once degerler� elde ett�k 
		*ogrno=gecici->ogrno; 
		*vize=gecici->vize;
		*final=gecici->final;
		
		
		top=top->sonraki; //top un b� sonrak�s� yan� b� alt�ndak�n� atad�k buraya 
		free(gecici);//gec�c�y� s�ld�k 
		
		return top; //ger� donduk 
	}
}

int main()
{
	
	struct OGRENCI *top =NULL;
	int ogrno,vize,final;
	
	for(int i=0;i<3;i++) //degerler� ekled�k
	{
		printf("%d ogrenc� ---------------------------------->\n",i+1);
		printf("Vize notu: "); scanf("%d",&vize);
		printf("Final notu: "); scanf("%d",&final);
		top=Push(top,i+1,vize,final);
	}
	
	printf("\n\n");
	
	for(int i=0;i<3;i++) //degerler� okuyarak s�ld�k 
	{
		top=Pop(top,&ogrno,&vize,&final);
		printf("ogrno:%d , vize/final : %d/%d \n",ogrno,vize,final);
	}
	
	return 0;
}
