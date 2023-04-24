#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//poýnter ders 2

int main()
{
	/*
	Dinamik bellek kullanýmý için genellikle malloc() ve free() fonksiyonlarý birlikte
	 kullanýlýr. malloc() fonksiyonu belleði tahsis ederken, free() fonksiyonu ise önceden 
	 tahsis edilmiþ belleði boþa çýkarýr.
	*/
	/*
	int *ip;
	ip=(int*)malloc(sizeof(int));  //remden int kadar yaný 4byt yer ayýr dedýk burada 
	*ip=126; //burada deger verdik
printf("%p\n",ip);
printf("%d\n",*ip);
	
	free(ip); //ram i boþalt dedik
	
	
	printf("%p\n",ip);
printf("%d\n",*ip);
	*/
/*
char *cp1="ilk karakter";
char *cp2,*cp3;
char cdizi[30];

cp2="ikinci karakter dizisi";

cp3=(char *)malloc(sizeof(char)*30); //30 elemanlý char 
cp3="üçüncükarkter dizisi";	
strcpy(cdizi,"dördüncü dizi");

printf("%s\n %s\n %s\n %s\n \n\n",cp1,cp2,cp3,cdizi);
free(cp3);	
	
	int *p;
	p=(int *)malloc(3*sizeof(int));
	/*
	...
	iþlemler
	...
	
	p=(int *)realloc(p,33*sizeof(int)); //yenýden boyutlandýrdýk
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
























