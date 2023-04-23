#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>


	
	//Sýnava hazýrlýk 1 
	/*
		fopen( )           Bir dosya açar.
		fclose( )          Bir dosyayý kapatýr.
		fputc( )           Dosyaya bir karakter yazar.
		fgetc( )           Dosyadan bir karakter okur.
	*/
	
	/*
	FILE *fopen (char *dosya-adý, char *mod);
	dosya-adý: açýlacak dosya adý
	mod      : dosya açýlýþ þekli
			
		r     Okuma için bir metin dosyasý açar.
		w     Yazma için bir metin dosyasý oluþturur.
		a     Bir metin dosyasýna ekleme yapar.
		
		rb    Okuma için bir dosyayý ikili sistemde açar.
		wb    Yazma için ikili sistemde bir dosya oluþturur.
		ab    Ýkili sistemde bir dosyaya ekleme yapar.
		
		r+    Okuma ve yazma için bir metin dosyasý açar.
		w+    Okuma ve yazma için bir metin dosyasý oluþturur.
		a+    Okuma ve yazma için bir metin dosyasý oluþturur veya ekleme yapar.
		
		r+b   Okuma ve yazma için bir ikili sistem dosyasý açar.
		w+b   Okuma ve yazma için bir ikili sistem dosyasý oluþturur.
		a+b   Okuma ve yazma için bir ikili sistem dosyasýna ekleme yapar

	*/
	
	

void kayit(char isim[20], char soyisim[20], int yas);
void okuma();
int asalsayi(int sayi);
void dosyayasayiekleme(int sayi[10]);
void asalsayisac();

int main ()
{
    /* 0 ile 1000 arasýnda rasgele ürettiðinin 100 adet tam sayýyý
     * sayilar.txt dosyasýna yazýnýz. */
     srand(time(NULL));
     
    char isim[] = "sadik", soyisim[] = "sünbül";
    int yas = 19;
     char isim1[] = "ali", soyisim1[] = "sünbül";
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
    printf("Baþarýlý bir þekilde kayýt yapýldý.\n");
}

void okuma()
{
	
    FILE *dosya = fopen("test.txt", "r");
    char isim[20], soyisim[20];
    int yas;
    while (fscanf(dosya, "%s %s %d", isim, soyisim, &yas) != EOF)
    {
    	printf("---********************----\n");
        printf("Ýsim: %s\n Soyisim: %s\n Yaþ: %d\n", isim, soyisim, yas);
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
	printf("sayýlar eklendi");
	
}

void asalsayisac()
{
	FILE *dosya=fopen("testsayi.txt","r");
	FILE *dosya1=fopen("asal.txt","w");
	int sayi;
	while(fscanf(dosya,"%d",&sayi)!=EOF){ //&sayi boyle yazýlmasa ýdý sayý degerýne atanmazdý okunan degerler
		
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














