#include <stdio.h>

//Pointerlar

int main()
{
	/*
	int x=5;
	int *ptr=&x;
	int *ptr1;
	ptr1=&x; //buraya x in adresýný atadýk
	
	
	printf("x:%d\n",x);
	printf("*ptr:%d\n",*ptr);
	printf("ptr:%d\n",ptr);
	printf("&x:%d\n",&x);
	printf("&ptr:%d\n",&ptr);

	printf("*ptr1:%d\n",*ptr1);  //x in deðeri 
	printf("ptr1:%d\n",ptr1);  //x in adresi
	printf("&x:%d\n",&x);
	
	//*ptr --> adresteký degerý verýr bize
	
	
	iþaretçileri için a++,b++,c++ iþlemleri kullanýldýðýnda belirtilen adres deðerleri
	 tipin boyutuna göre deðiþmektedir. a++ 4 byte artarak, b++ 8 byte artarak, c++ 1 
	 byte aratarak deðiþmektedir. Genel kural
	
	
	int *ip;
	int dizi[5]={5,17,21,34,46};
	int id;
	
	printf("iþaretçi bellek adresi:%d\n\n",&ip);
	
	ip=&dizi[0];
	
	for(id=0;id<5;id++,ip++){
		printf("iþaretçinin içerdiði adres : %p %p \n",ip,&dizi[id]);
		printf("iþaretçinin içerdiði degiskendegeri : %d %d \n",*ip,dizi[id]);
	}
	*/
	/*
	char *cp;
	char dizi[5]={'S','a','d','i','k'};
	
	cp=&dizi[0];
	int i=2;
	printf("%d. harf: %c",i,*(cp+i));  //burada +1 deyince 1 byt ýlerýlýyor cunki char 1byt
	
	
	int *it;
	int dizi1[5]={12,323,44,76,88};
	
	it=&dizi1[0];
	
	
	printf("sayý: %d",*(it)); //burada +1 deyince 4 byt ýlerýlýyor cunki int 4byt
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
	printf("%d.isim=%s\n",i+1,cph[i]);  //ayni iþlemleri yaparlar
	*/
	//iþaretçi adresi taþýyan iþaretçiler **ip --> *ip niniþaretini taþir --> *ip de --> a nýn adresýný taþýr
	/*
int **ipp1,*ip1,id1;
int **ipp2,*ip2,id2;

ip1=&id1; //id nýn adresini --> ip1 e atadýk
ipp1=&ip1;	//ip1 in adresini --> ipp1 e atadýk

*ip1=175;

printf("%p %p %p \n",ipp1,ip1,&id1);
printf("%d %d %d \n",**ipp1,*ip1,id1);
*/

//pinter fonk


char dizi[40];

printf("bir karakter dýzýsý gýrýnýz: ");
gets(dizi); //yaazarýz
 // scanf("%s",dizi);   ---> burasýda olur uste olur

puts(dizi);
printf("%s\n",dizi);
printf(dizi);
//hepsý ayný ýse yarar


	return 0;
}


















