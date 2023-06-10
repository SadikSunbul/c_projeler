#include <stdio.h>
#include <string.h>
struct ogranci {
		char isim[20];
		char soyisim[20];
		float ortalama;
	};//veritipi tanýmýný yaptým
	
int main(){
/*	
	//char diziler string
	
	//char *isim="sadýk"; //poýnter ýle tanýmlama 
	char isim[]="sadik"; //--> 's','a','d','ý','k','\0'
	char isim1[10];
	//isim1 dizinini adresi
	printf("isim giriniz");
	scanf("%s",isim1);
	
	printf("%s,%s",isim,isim1);
	*/
	//strýnglerde kullanýlýr bunlar
//gets puts
//scanf()-->puts
/*
char deneme[20];
puts("Lutfen bir isim giriniz:");
gets(deneme);
puts(deneme);
	*/
	
	//struct 
	/*
	struct ogranci ogr1={"sadýk","sünbül",3.75};//deðiþken olustururldu verý týpý ogranci
	struct ogranci ogr2;
	
	strcpy(ogr2.isim,"ahmet");  //char cýnsýnden oldugu ýcýn boyle atanmalý yada ýlk basta atanmalý 
	strcpy(ogr2.soyisim,"sunbul");
	ogr2.ortalama=3.45;
*/

struct ogranci ogrenciler[]={{"Sadýk","Sünbül",3.9},{"Ahmet","Hamdi",4.0}};
	
	printf("Ogrenci ismi:%s\n",ogrenciler[0].isim);
	printf("Ogrenci soyismi:%s\n",ogrenciler[0].soyisim);
	printf("Ogrenci ortalama:%s\n",ogrenciler[0].ortalama);
	
	printf("Ogrenci ismi:%s\n",ogrenciler[1].isim);
	printf("Ogrenci soyismi:%s\n",ogrenciler[1].soyisim);
	printf("Ogrenci ortalama:%s\n",ogrenciler[1].ortalama);
	
	
	struct ogranci ogrenciler1[3];
	int i;
	for	(i=0;i<3;i++)
	{
		puts("Lütfen ogrencý ýsmýný gýrýnýz:");
		scanf("%s",&ogrenciler1[i].isim);
		puts("Lütfen ogrencý soyisim gýrýnýz:");
		scanf("%s",&ogrenciler1[i].soyisim);
		puts("Lütfen ogrencý ortalamasýný gýrýnýz:");
		scanf("%s",&ogrenciler1[i].ortalama);
		
	}
	 
	for	(i=0;i<3;i++){
		printf("%d.ogrencýnýn adý-soyadý %s-%s ortalamasý:%d\n",i+1,ogrenciler1[i].isim,ogrenciler1[i].soyisim,ogrenciler1[i].ortalama);
		
	}
	
		struct ogranci ogr1;
		printf("Lütfen býr isim grinizz");
		scanf("%s",&ogr1.isim);
		printf("%s",ogr1.isim);
	return 0;
}
