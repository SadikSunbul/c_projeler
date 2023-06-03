#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int deger;
	struct Node *sonraki;
	struct Node *onceki; //ek olarak buray� ekled�k 
};



int main()
{
	struct Node *ilk=NULL;
	struct Node *ptr=NULL,*gecici=NULL;
	int okunan;
	
	//Burada ekleme �slem� yapt�k 
	for(int i=0;i<10;i++)
	{
		okunan=i+10;
		if(ilk==NULL)
		{
			ilk=(struct Node *)malloc(sizeof(struct Node*));
			ilk->deger=okunan;
			ilk->onceki=NULL;
			ilk->sonraki=NULL;
			ptr=ilk;		
		}else{
			ptr->sonraki=(struct Node *)malloc(sizeof(struct Node *));
			ptr->sonraki->onceki=ptr;
			ptr=ptr->sonraki;
			ptr->deger=okunan;
			ptr->sonraki=NULL;
		}
	}
	
	//elemanlar� yazd�r�d�k 
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("Adres:%x degeri.%d on adres:%x sonadres:%x \n",gecici,gecici->deger,gecici->onceki,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	//Arama k�sm� 
	
	struct Node *Bul=NULL;
	int aranan,bulundu=0;
	
	printf("Aranan deger� lutfen g�r�n�z:");
	scanf("%d",&aranan);
	gecici=ilk;
	while(gecici!=NULL) //tum elemanlar� dolas�caz 
	{
		if(gecici->deger==aranan) //suank�n�n deger� aranana es�t �se g�r �cer� 
		{
			bulundu=1;
			Bul=gecici; //gec�c�y� bul a ata 
			break; //c�k 
		}else{
			
		}
		gecici=gecici->sonraki; //d�ger elemana gec ded�k 
	}
	
		//silme i�lemi ustek� sec�len eleman� s�lem olucak 
		
	if(bulundu==1)
	{
		printf("Aranan deger bulundu adres� :%x , deger�:%d \n",Bul,Bul->deger);
		
		//silme i�lemi buada yap�l�cak 
		if(ilk==Bul) //bulunan deger �lk e es�t �se g�r 
		{
		 ilk=ilk->sonraki;  //ilk�n degr�n� deg�st�r�yoruz burada cunku �lk s�l�n�cek 
		 ilk->onceki=NULL;	//ilk�n onces�n� null yapt�k cunku �lk�n onces� olmaz
		}else { //bulunan �lk deg�l �se buraya g�r ded�k
			gecici=ilk; //gec�c�ye atad�k 
			
			while(gecici->sonraki!=Bul) //gec�c�n�n deger� aranana es�t oluncaya kadar gez ded�k 
			{
			gecici=gecici->sonraki; //b� sonrak� degere gecer 
			}
			//burada gec�c� bulunan eleman�n b� oncesi
			if(Bul->sonraki!=NULL){ //bulunan dger�n sonras� nul a es�t deg�lse asag� g�r
					gecici->sonraki->sonraki->onceki=gecici; //suank�n�n sonras�n�n sonras�n�n onces� s�md�k� olsun ded�k aradak�n� c�kar�caz ya 
				gecici->sonraki=gecici->sonraki->sonraki; //s�md�k�n�n sonras�da s�md�k�n�n sonras�n�n sonras� olsun ded�k 
			}else //sonrak� nul �se son elemandas�n demekt�r 
			{
				gecici->sonraki=NULL; //burada gec�c�n�n sonras� null olsun ded�k 
			}
			free(Bul);
		}
		
		
	}else
	{
		printf("Aranan deger bulunamd� ");
	}
	
//s�ralad�k 
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("Adres:%x degeri.%d on adres:%x sonadres:%x \n",gecici,gecici->deger,gecici->onceki,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	

	return 0;
}
