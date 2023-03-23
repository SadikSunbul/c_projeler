#include <stdio.h>
 int Toplam(int sayi);
 
int main()
 {
 	printf("Lütfen bir sayi giriniz:");
 	int girilensayi;
 	scanf("%d",&girilensayi);
 	int sonuc;
 	sonuc=Toplam(girilensayi);
 	printf("Girilen sayiya kadar sayilarin toplami:%d",sonuc);
 	return 0;
 }
 
 int Toplam(int sayi)
 {
 	if(sayi<1)
 	{
 		return 0;
	 }
	 return sayi+Toplam(sayi-1);
 }
