#include <stdio.h>
#include <stdlib.h>


struct Node{
	int sayi;
	struct Node* sonraki;
};

int main()
{
	
	struct Node *ilk=NULL; //ilk deger� el�m�zde tutumak gerek kaybedersek ls�tede el�m�zden g�tm�s demkt�r 
	struct Node *ptr=NULL;  //i�lemleri bunun ustunden gerceklest�r�cez
	struct Node *gecici=NULL; //laz�m oldukca bunu kullan�caz arama vb �slemlerde bveya heps�n� yazd�rma vb 
	int okunan;
	
	for(int i=0;i<10;i++)  
	{
			
			if(ilk==NULL)  //�lk eleman� olmad�g�nda b�uraya g�r ded�k 
		{
			ilk=(struct Node*)malloc(sizeof(struct Node)); //burada remden yer �sted�k Node kadar byt l�k node* tutucak b� yer tas�s ett�k ve ilk degere atad�k 
			ilk->sayi=i; //ilk adres�n deger�ne say� atad�k
			ilk->sonraki=NULL; //�lk adres�n sonrak� deger�ne null ded�k cunku buras� �lk deger atama yan� son adreste den�le b�l�r buraya o yuzden null
			ptr=ilk; //ilk adres elm�zden kaybetmemek �c�n deger� ptr ye atand� bundan sonrak� �slemler ptr den devam ed�cekt�r
		}else{  //ilk eleman ekleme deg�lde buraya g�r ded�k
			ptr->sonraki=(struct Node*)malloc(sizeof(struct Node)); //yer tahs�s ett�k ptr n�n sonrak� adres�ne 
			ptr=ptr->sonraki; //ptry �lk olarak dusunel�m ptr y� b� sonrak� adrese gec�yoz  
			ptr->sayi=i;  //bu adres�n deger�n� dolduruyoruz 
			ptr->sonraki=NULL; //sonrak� adres�n � bos brak�yoruz 
		}
    }
	gecici=ilk; //il � kaybetmemek �c�n bunu buraya koyduk 
	
	while(gecici!=NULL){ //ilk degreden baslar ve kontrol eder bulloluncaya kadar �cer� g�r 
		printf("adres:%x ,De�eri: %d , sonrakiadres: %x \n",gecici,gecici->sayi,gecici->sonraki); //�lg�l� degerler� yazd�r�rs�n 
	gecici=gecici->sonraki; //b� sonrak� degere gec der 
	}	
	
	struct Node *Bul=NULL; //arama �c�n bulunacak deger�n tutulacag� b�r adres olsuturduk
	int aranan,bulundu=0;
	
	gecici=ilk;
	printf("Aranacak say�y� g�r�n�z:");
	scanf("%d",&aranan);
	
	while(gecici!=NULL){  //�c�nde ful gez
		
		if(gecici->sayi==aranan) //aranan degere es�tse g�r 
		{
			bulundu=1; //true yap
			Bul=gecici; //bulunan deger� bul a ata 
			break; //c�k 
		}
		
		gecici=gecici->sonraki; //sonrak� degere gec 
	}
	
	if	(bulundu==1)
	{
		printf("aranan sayi bulundu %d ",Bul->sayi);
	}else{
		printf("Bu dizide boyle bir sayi yok ");
	}
	
	gecici=ilk;
	
	if(gecici==Bul)  //bulunan eleeman �lk elemana es�tse s�lme �slem� burada yap�lacak 
	{
		ilk=gecici->sonraki; //ilk �n deger� deg�s�cek art�k b� sorak� deger� tutcak bunu yapmadan s�lersek d�z�y� kaybeder�z
		free(gecici); //bulunan deger� s�l
			
	}else{ //ilk eleman deg�lse buraya g�r 
		while(gecici->sonraki!=Bul) //burada eleman�n sonrak� deger buldugumuz say� deg�lse g�r ded�k 
		{
			gecici=gecici->sonraki; //burada 1 sonrak� degere gect�k 
		}//gec�c� deger�n b� sonrak� deger� bulunan say�ya es�t �se alta gel�cek 
		gecici->sonraki=gecici->sonraki->sonraki; //buada gec�c� n�n b� sonrak� deger�n� deg�st�rcez cunku aras�n� s�l�cez b� sonrak� deger� b� sonrak�n�n b� sonrak� deger�ne es�tler�z
		free(Bul); //bulunan deger� s�ler�z 
	}
	gecici=ilk;
	while(gecici!=NULL){  //buarda yen�den s�ralar�z 
		printf("adres:%x ,De�eri: %d , sonrakiadres: %x \n",gecici,gecici->sayi,gecici->sonraki);
	gecici=gecici->sonraki;
	}	
	
	return 0;
}
