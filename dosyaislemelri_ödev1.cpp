#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	FILE *dosya=fopen("sayilar.txt","w"); //yazacagým dosyayý actým
	srand(time(NULL));
	if(dosya!=NULL)  //dosya acýldýmý acýlmadýmý 
	{
		
		printf("Dosya basrýlý býr sekýlde olusturuldu ");
		for(int i=0;i<100;i++){
		int	sayi = rand() % 1001; // 0 ile 1000 arasýnda rasgele bir sayý üret
            fprintf(dosya, "%d\n", sayi);  //sayýyý dosyaya kaydet
		}
		
	}
	else
	{
		printf("Dosya olusturulamadý");
	}
	
	
	return 0;
}
