#include <stdio.h>
#include <string.h>
struct ogranci {
		char isim[20];
		char soyisim[20];
		float ortalama;
	};//veritipi tan�m�n� yapt�m
	
int main(){
/*	
	//char diziler string
	
	//char *isim="sad�k"; //po�nter �le tan�mlama 
	char isim[]="sadik"; //--> 's','a','d','�','k','\0'
	char isim1[10];
	//isim1 dizinini adresi
	printf("isim giriniz");
	scanf("%s",isim1);
	
	printf("%s,%s",isim,isim1);
	*/
	//str�nglerde kullan�l�r bunlar
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
	struct ogranci ogr1={"sad�k","s�nb�l",3.75};//de�i�ken olustururldu ver� t�p� ogranci
	struct ogranci ogr2;
	
	strcpy(ogr2.isim,"ahmet");  //char c�ns�nden oldugu �c�n boyle atanmal� yada �lk basta atanmal� 
	strcpy(ogr2.soyisim,"sunbul");
	ogr2.ortalama=3.45;
*/

struct ogranci ogrenciler[]={{"Sad�k","S�nb�l",3.9},{"Ahmet","Hamdi",4.0}};
	
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
		puts("L�tfen ogrenc� �sm�n� g�r�n�z:");
		scanf("%s",&ogrenciler1[i].isim);
		puts("L�tfen ogrenc� soyisim g�r�n�z:");
		scanf("%s",&ogrenciler1[i].soyisim);
		puts("L�tfen ogrenc� ortalamas�n� g�r�n�z:");
		scanf("%s",&ogrenciler1[i].ortalama);
		
	}
	 
	for	(i=0;i<3;i++){
		printf("%d.ogrenc�n�n ad�-soyad� %s-%s ortalamas�:%d\n",i+1,ogrenciler1[i].isim,ogrenciler1[i].soyisim,ogrenciler1[i].ortalama);
		
	}
	
		struct ogranci ogr1;
		printf("L�tfen b�r isim grinizz");
		scanf("%s",&ogr1.isim);
		printf("%s",ogr1.isim);
	return 0;
}
