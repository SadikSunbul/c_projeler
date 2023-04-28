
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void lenght(char *ptr,int *uzunluk);
void arama(char *metin1,char *metin2);
int main()
{
	/*
	char *isim=(char *)malloc(sizeof(char)*20);
	char *isim1[20];
	printf("lütfen ýsmýnýzý gýrýnýz");
	scanf("%s",isim1);
	printf("girdiginiz isim:%s",isim1);
	
	int uzunluk=0;
	char isim[]="\nsadik ahmet";
	lenght(isim,&uzunluk);
	printf("%d",uzunluk);
	printf("%s",isim);
	*/
	char metin1[]="sadik";
	char metin2[]="sadik";	
	arama(metin1,metin2);
	return 0;
}

void lenght(char *ptr,int *uzunluk)
{
	while((*ptr)!='\0')
	{
		
		*uzunluk=*uzunluk+1;
		ptr++;
	}
}

void arama(char *metin1, char *metin2) {
    int metin1uzunluk = 0;
    int metin2uzunluk = 0;
    char *p_metin1 = metin1;
    char *p_metin2 = metin2;

    while (*p_metin1 != '\0') {
        metin1uzunluk++;
        p_metin1++;
    }

    while (*p_metin2 != '\0') {
        metin2uzunluk++;
        p_metin2++;
    }

    if (metin1uzunluk == metin2uzunluk) {
        int test = 1; // eþit demek
        for (int i = 0; i < metin1uzunluk; i++) {
            if (*(metin1 + i) != *(metin2 + i)) {
                test = 0; // eþitlik bozuldu demek
            }
        }
        if (test == 1) {
            printf("bu kelimelere eþittir.");
        } else {
            printf("bu kelimeler eþit deðil.");
        }
    } else {
        printf("bu metinler eþit deðildir");
    }
}


