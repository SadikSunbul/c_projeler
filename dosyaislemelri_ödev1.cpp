#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	FILE *dosya=fopen("sayilar.txt","w"); //yazacag�m dosyay� act�m
	srand(time(NULL));
	if(dosya!=NULL)  //dosya ac�ld�m� ac�lmad�m� 
	{
		
		printf("Dosya basr�l� b�r sek�lde olusturuldu ");
		for(int i=0;i<100;i++){
		int	sayi = rand() % 1001; // 0 ile 1000 aras�nda rasgele bir say� �ret
            fprintf(dosya, "%d\n", sayi);  //say�y� dosyaya kaydet
		}
		
	}
	else
	{
		printf("Dosya olusturulamad�");
	}
	
	
	return 0;
}
