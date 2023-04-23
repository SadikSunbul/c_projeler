#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>


	
	//S�nava haz�rl�k 1 
	/*
		fopen( )           Bir dosya a�ar.
		fclose( )          Bir dosyay� kapat�r.
		fputc( )           Dosyaya bir karakter yazar.
		fgetc( )           Dosyadan bir karakter okur.
	*/
	
	/*
	FILE *fopen (char *dosya-ad�, char *mod);
	dosya-ad�: a��lacak dosya ad�
	mod      : dosya a��l�� �ekli
			
		r     Okuma i�in bir metin dosyas� a�ar.
		w     Yazma i�in bir metin dosyas� olu�turur.
		a     Bir metin dosyas�na ekleme yapar.
		
		rb    Okuma i�in bir dosyay� ikili sistemde a�ar.
		wb    Yazma i�in ikili sistemde bir dosya olu�turur.
		ab    �kili sistemde bir dosyaya ekleme yapar.
		
		r+    Okuma ve yazma i�in bir metin dosyas� a�ar.
		w+    Okuma ve yazma i�in bir metin dosyas� olu�turur.
		a+    Okuma ve yazma i�in bir metin dosyas� olu�turur veya ekleme yapar.
		
		r+b   Okuma ve yazma i�in bir ikili sistem dosyas� a�ar.
		w+b   Okuma ve yazma i�in bir ikili sistem dosyas� olu�turur.
		a+b   Okuma ve yazma i�in bir ikili sistem dosyas�na ekleme yapar

	*/
	
	

void kayit(char isim[20], char soyisim[20], int yas);
void okuma();
int asalsayi(int sayi);
void dosyayasayiekleme(int sayi[10]);
void asalsayisac();

int main ()
{
    /* 0 ile 1000 aras�nda rasgele �retti�inin 100 adet tam say�y�
     * sayilar.txt dosyas�na yaz�n�z. */
     srand(time(NULL));
     
    char isim[] = "sadik", soyisim[] = "s�nb�l";
    int yas = 19;
     char isim1[] = "ali", soyisim1[] = "s�nb�l";
    int yas1 = 13;
    kayit(isim1, soyisim1, yas1);
    kayit(isim, soyisim, yas);
    okuma();
    int sayi[10];
    for(int i=0;i<10;i++)
    {
    	sayi[i]=rand()%50;
	}
    dosyayasayiekleme(sayi);
    asalsayisac();

    return 0;
}

void kayit(char isim[20], char soyisim[20], int yas)
{
    FILE *dosya = fopen("test.txt", "a");
    fprintf(dosya, "%s %s %d\n", isim, soyisim, yas);
    fclose(dosya);
    printf("Ba�ar�l� bir �ekilde kay�t yap�ld�.\n");
}

void okuma()
{
	
    FILE *dosya = fopen("test.txt", "r");
    char isim[20], soyisim[20];
    int yas;
    while (fscanf(dosya, "%s %s %d", isim, soyisim, &yas) != EOF)
    {
    	printf("---********************----\n");
        printf("�sim: %s\n Soyisim: %s\n Ya�: %d\n", isim, soyisim, yas);
    }
    fclose(dosya);
    printf("----------------------");
}
void dosyayasayiekleme(int sayi[10])
{
	FILE *dosya=fopen("testsayi.txt","a");
	for(int i=0;i<10;i++)
	{
		fprintf(dosya,"%d\n",sayi[i]);
	}
	fclose(dosya);
	printf("say�lar eklendi");
	
}

void asalsayisac()
{
	FILE *dosya=fopen("testsayi.txt","r");
	FILE *dosya1=fopen("asal.txt","w");
	int sayi;
	while(fscanf(dosya,"%d",&sayi)!=EOF){ //&sayi boyle yaz�lmasa �d� say� deger�ne atanmazd� okunan degerler
		
		int kontrol=asalsayi(sayi);
		if(kontrol==1){
		
		fprintf(dosya1,"%d\n",sayi);	
		}
	}
}

int asalsayi(int sayi){
	int kontrol=1;
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			kontrol=0;
		return kontrol;
		}
	}
	
return kontrol;
}














