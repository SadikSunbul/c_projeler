#include <stdio.h>
int obeb(int sayi1, int sayi2);
int main()
{
	printf("Lütfen 1. sayiyi giriniz:");
	int sayi1,sayi2,sonuc;
	scanf("%d",&sayi1);
	printf("Lütfen 2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	sonuc=obeb(sayi1,sayi2);
	printf("Obeb sonucu:%d",sonuc);
	return 0;
}

int obeb(int sayi1, int sayi2) {
    if (sayi2 == 0) {
        return sayi1;
    }
    else {
        return obeb(sayi2, sayi1 % sayi2);
    }
}

