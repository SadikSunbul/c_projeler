#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//po�nter ders 2

int main()
{
	/*
	Dinamik bellek kullan�m� i�in genellikle malloc() ve free() fonksiyonlar� birlikte
	 kullan�l�r. malloc() fonksiyonu belle�i tahsis ederken, free() fonksiyonu ise �nceden 
	 tahsis edilmi� belle�i bo�a ��kar�r.
	*/
	/*
	int *ip;
	ip=(int*)malloc(sizeof(int));  //remden int kadar yan� 4byt yer ay�r ded�k burada 
	*ip=126; //burada deger verdik
printf("%p\n",ip);
printf("%d\n",*ip);
	
	free(ip); //ram i bo�alt dedik
	
	
	printf("%p\n",ip);
printf("%d\n",*ip);
	*/
/*
char *cp1="ilk karakter";
char *cp2,*cp3;
char cdizi[30];

cp2="ikinci karakter dizisi";

cp3=(char *)malloc(sizeof(char)*30); //30 elemanl� char 
cp3="���nc�karkter dizisi";	
strcpy(cdizi,"d�rd�nc� dizi");

printf("%s\n %s\n %s\n %s\n \n\n",cp1,cp2,cp3,cdizi);
free(cp3);	
	
	int *p;
	p=(int *)malloc(3*sizeof(int));
	/*
	...
	i�lemler
	...
	
	p=(int *)realloc(p,33*sizeof(int)); //yen�den boyutland�rd�k
	*/
	
	char *dizi[5];
	int id;
	for(id=0;id<5;id++)
	{
		dizi[id]=(char *)malloc(sizeof(char)*20);
	}
	for(id=0;id<5;id++)
	{
		strcpy(dizi[id],"karakter");
	}
	for(id=0;id<5;id++)
	{
		printf("%s\n",dizi[id]);
	}
	for(id=0;id<5;id++)
	{
		free(dizi[id]);
	}
	
	char *dizi1;
	
	int i;
	
	dizi1=(char *)malloc(sizeof(char)*20);
	strcpy(dizi1,"Sadik sunbul");
	printf("%s",dizi1);
	
	return 0;
}
























