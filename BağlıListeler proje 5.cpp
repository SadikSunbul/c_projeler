#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int deger;
	struct Node *sonraki;
	struct Node *onceki; //ek olarak burayý ekledýk 
};



int main()
{
	struct Node *ilk=NULL;
	struct Node *ptr=NULL,*gecici=NULL;
	int okunan;
	
	//Burada ekleme ýslemý yaptýk 
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
	
	//elemanlarý yazdýrýdýk 
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("Adres:%x degeri.%d on adres:%x sonadres:%x \n",gecici,gecici->deger,gecici->onceki,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	//Arama kýsmý 
	
	struct Node *Bul=NULL;
	int aranan,bulundu=0;
	
	printf("Aranan degerý lutfen gýrýnýz:");
	scanf("%d",&aranan);
	gecici=ilk;
	while(gecici!=NULL) //tum elemanlarý dolasýcaz 
	{
		if(gecici->deger==aranan) //suankýnýn degerý aranana esýt ýse gýr ýcerý 
		{
			bulundu=1;
			Bul=gecici; //gecýcýyý bul a ata 
			break; //cýk 
		}else{
			
		}
		gecici=gecici->sonraki; //dýger elemana gec dedýk 
	}
	
		//silme iþlemi usteký secýlen elemaný sýlem olucak 
		
	if(bulundu==1)
	{
		printf("Aranan deger bulundu adresý :%x , degerý:%d \n",Bul,Bul->deger);
		
		//silme iþlemi buada yapýlýcak 
		if(ilk==Bul) //bulunan deger ýlk e esýt ýse gýr 
		{
		 ilk=ilk->sonraki;  //ilkýn degrýný degýstýrýyoruz burada cunku ýlk sýlýnýcek 
		 ilk->onceki=NULL;	//ilkýn oncesýný null yaptýk cunku ýlkýn oncesý olmaz
		}else { //bulunan ýlk degýl ýse buraya gýr dedýk
			gecici=ilk; //gecýcýye atadýk 
			
			while(gecici->sonraki!=Bul) //gecýcýnýn degerý aranana esýt oluncaya kadar gez dedýk 
			{
			gecici=gecici->sonraki; //bý sonraký degere gecer 
			}
			//burada gecýcý bulunan elemanýn bý oncesi
			if(Bul->sonraki!=NULL){ //bulunan dgerýn sonrasý nul a esýt degýlse asagý gýr
					gecici->sonraki->sonraki->onceki=gecici; //suankýnýn sonrasýnýn sonrasýnýn oncesý sýmdýký olsun dedýk aradakýný cýkarýcaz ya 
				gecici->sonraki=gecici->sonraki->sonraki; //sýmdýkýnýn sonrasýda sýmdýkýnýn sonrasýnýn sonrasý olsun dedýk 
			}else //sonraký nul ýse son elemandasýn demektýr 
			{
				gecici->sonraki=NULL; //burada gecýcýnýn sonrasý null olsun dedýk 
			}
			free(Bul);
		}
		
		
	}else
	{
		printf("Aranan deger bulunamdý ");
	}
	
//sýraladýk 
	gecici=ilk;
	while(gecici!=NULL)
	{
		printf("Adres:%x degeri.%d on adres:%x sonadres:%x \n",gecici,gecici->deger,gecici->onceki,gecici->sonraki);
		gecici=gecici->sonraki;
	}
	

	return 0;
}
