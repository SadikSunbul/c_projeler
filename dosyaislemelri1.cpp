
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya = fopen("sayilar.txt","r");
    FILE *dosya2 = fopen("asalsayi.txt","w");

    if(dosya != NULL && dosya2 != NULL)
    {
        int sayi;
        while(fscanf(dosya, "%d", &sayi) == 1)
        {
            int kontrol = 0;
            for(int i = 2; i < sayi; i++)
            {
                if(sayi % i == 0)
                {
                    kontrol = 1;
                    break;
                }
            }
            if(kontrol == 0)
            {
                fprintf(dosya2, "%d\n", sayi);
            }
        }
        fclose(dosya);
        fclose(dosya2);
    }
    else
    {
        printf("Dosyalar acilamadi.");
    }

    return 0;
}



