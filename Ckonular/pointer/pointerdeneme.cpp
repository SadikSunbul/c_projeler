#include <stdio.h>

//Pointerlar

int main()
{
	/*
	int x=5;
	int *ptr=&x;
	int *ptr1;
	ptr1=&x; //buraya x in adres�n� atad�k
	
	
	printf("x:%d\n",x);
	printf("*ptr:%d\n",*ptr);
	printf("ptr:%d\n",ptr);
	printf("&x:%d\n",&x);
	printf("&ptr:%d\n",&ptr);

	printf("*ptr1:%d\n",*ptr1);  //x in de�eri 
	printf("ptr1:%d\n",ptr1);  //x in adresi
	printf("&x:%d\n",&x);
	
	//*ptr --> adrestek� deger� ver�r bize
	
	
	i�aret�ileri i�in a++,b++,c++ i�lemleri kullan�ld���nda belirtilen adres de�erleri
	 tipin boyutuna g�re de�i�mektedir. a++ 4 byte artarak, b++ 8 byte artarak, c++ 1 
	 byte aratarak de�i�mektedir. Genel kural
	
	
	int *ip;
	int dizi[5]={5,17,21,34,46};
	int id;
	
	printf("i�aret�i bellek adresi:%d\n\n",&ip);
	
	ip=&dizi[0];
	
	for(id=0;id<5;id++,ip++){
		printf("i�aret�inin i�erdi�i adres : %p %p \n",ip,&dizi[id]);
		printf("i�aret�inin i�erdi�i degiskendegeri : %d %d \n",*ip,dizi[id]);
	}
	*/
	/*
	char *cp;
	char dizi[5]={'S','a','d','i','k'};
	
	cp=&dizi[0];
	int i=2;
	printf("%d. harf: %c",i,*(cp+i));  //burada +1 deyince 1 byt �ler�l�yor cunki char 1byt
	
	
	int *it;
	int dizi1[5]={12,323,44,76,88};
	
	it=&dizi1[0];
	
	
	printf("say�: %d",*(it)); //burada +1 deyince 4 byt �ler�l�yor cunki int 4byt
	*/
	/*
	char *cph[]={
	"sadik",
	"ali",
	"safa",
	"osman"
	};
	
	int i=3;
	printf("%d.isim=%s\n",i+1,*(cph+i));
	printf("%d.isim=%s\n",i+1,cph[i]);  //ayni i�lemleri yaparlar
	*/
	//i�aret�i adresi ta��yan i�aret�iler **ip --> *ip nini�aretini ta�ir --> *ip de --> a n�n adres�n� ta��r
	/*
int **ipp1,*ip1,id1;
int **ipp2,*ip2,id2;

ip1=&id1; //id n�n adresini --> ip1 e atad�k
ipp1=&ip1;	//ip1 in adresini --> ipp1 e atad�k

*ip1=175;

printf("%p %p %p \n",ipp1,ip1,&id1);
printf("%d %d %d \n",**ipp1,*ip1,id1);
*/

//pinter fonk


char dizi[40];

printf("bir karakter d�z�s� g�r�n�z: ");
gets(dizi); //yaazar�z
 // scanf("%s",dizi);   ---> buras�da olur uste olur

puts(dizi);
printf("%s\n",dizi);
printf(dizi);
//heps� ayn� �se yarar


	return 0;
}


















