#include <stdio.h>
#include <stdlib.h>


struct Node{
	int sayi;
	struct Node* sonraki;
};

int main()
{
	
	struct Node *ilk=NULL; //ilk degerý elýmýzde tutumak gerek kaybedersek lsýtede elýmýzden gýtmýs demktýr 
	struct Node *ptr=NULL;  //iþlemleri bunun ustunden gerceklestýrýcez
	struct Node *gecici=NULL; //lazým oldukca bunu kullanýcaz arama vb ýslemlerde bveya hepsýný yazdýrma vb 
	int okunan;
	
	for(int i=0;i<10;i++)  
	{
			
			if(ilk==NULL)  //ýlk elemaný olmadýgýnda býuraya gýr dedýk 
		{
			ilk=(struct Node*)malloc(sizeof(struct Node)); //burada remden yer ýstedýk Node kadar byt lýk node* tutucak bý yer tasýs ettýk ve ilk degere atadýk 
			ilk->sayi=i; //ilk adresýn degerýne sayý atadýk
			ilk->sonraki=NULL; //ýlk adresýn sonraký degerýne null dedýk cunku burasý ýlk deger atama yaný son adreste denýle býlýr buraya o yuzden null
			ptr=ilk; //ilk adres elmýzden kaybetmemek ýcýn degerý ptr ye atandý bundan sonraký ýslemler ptr den devam edýcektýr
		}else{  //ilk eleman ekleme degýlde buraya gýr dedýk
			ptr->sonraki=(struct Node*)malloc(sizeof(struct Node)); //yer tahsýs ettýk ptr nýn sonraký adresýne 
			ptr=ptr->sonraki; //ptry ýlk olarak dusunelým ptr yý bý sonraký adrese gecýyoz  
			ptr->sayi=i;  //bu adresýn degerýný dolduruyoruz 
			ptr->sonraki=NULL; //sonraký adresýn ý bos brakýyoruz 
		}
    }
	gecici=ilk; //il ý kaybetmemek ýcýn bunu buraya koyduk 
	
	while(gecici!=NULL){ //ilk degreden baslar ve kontrol eder bulloluncaya kadar ýcerý gýr 
		printf("adres:%x ,Deðeri: %d , sonrakiadres: %x \n",gecici,gecici->sayi,gecici->sonraki); //ýlgýlý degerlerý yazdýrýrsýn 
	gecici=gecici->sonraki; //bý sonraký degere gec der 
	}	
	
	struct Node *Bul=NULL; //arama ýcýn bulunacak degerýn tutulacagý býr adres olsuturduk
	int aranan,bulundu=0;
	
	gecici=ilk;
	printf("Aranacak sayýyý gýrýnýz:");
	scanf("%d",&aranan);
	
	while(gecici!=NULL){  //ýcýnde ful gez
		
		if(gecici->sayi==aranan) //aranan degere esýtse gýr 
		{
			bulundu=1; //true yap
			Bul=gecici; //bulunan degerý bul a ata 
			break; //cýk 
		}
		
		gecici=gecici->sonraki; //sonraký degere gec 
	}
	
	if	(bulundu==1)
	{
		printf("aranan sayi bulundu %d ",Bul->sayi);
	}else{
		printf("Bu dizide boyle bir sayi yok ");
	}
	
	gecici=ilk;
	
	if(gecici==Bul)  //bulunan eleeman ýlk elemana esýtse sýlme ýslemý burada yapýlacak 
	{
		ilk=gecici->sonraki; //ilk ýn degerý degýsýcek artýk bý soraký degerý tutcak bunu yapmadan sýlersek dýzýyý kaybederýz
		free(gecici); //bulunan degerý sýl
			
	}else{ //ilk eleman degýlse buraya gýr 
		while(gecici->sonraki!=Bul) //burada elemanýn sonraký deger buldugumuz sayý degýlse gýr dedýk 
		{
			gecici=gecici->sonraki; //burada 1 sonraký degere gectýk 
		}//gecýcý degerýn bý sonraký degerý bulunan sayýya esýt ýse alta gelýcek 
		gecici->sonraki=gecici->sonraki->sonraki; //buada gecýcý nýn bý sonraký degerýný degýstýrcez cunku arasýný sýlýcez bý sonraký degerý bý sonrakýnýn bý sonraký degerýne esýtlerýz
		free(Bul); //bulunan degerý sýlerýz 
	}
	gecici=ilk;
	while(gecici!=NULL){  //buarda yenýden sýralarýz 
		printf("adres:%x ,Deðeri: %d , sonrakiadres: %x \n",gecici,gecici->sayi,gecici->sonraki);
	gecici=gecici->sonraki;
	}	
	
	return 0;
}
