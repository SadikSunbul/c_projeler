#include <stdio.h>

int solakaydir(int gelensayi,int nekadarkayicak);
int main()
{
	printf("Sayi Giriniz:");
	int sayi;
	scanf("%d",&sayi);
	printf("Sayinin ne kadara kayacagini Giriniz:");
	int sayi1;
	scanf("%d",&sayi1);

	int sonuc=solakaydir(sayi,sayi1);
	printf("Sonuc=%d",sonuc);
	
	return 0;
}


int solakaydir(int gelensayi,int nekadarkayicak)
{
	int kayansayi=gelensayi<<nekadarkayicak;
	return kayansayi;
}

