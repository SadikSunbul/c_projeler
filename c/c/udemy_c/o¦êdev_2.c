#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct ders {

            int ders_kod;

            int vize;

            int final;

            double gecmenotu;

     };

    struct sahis_bilgileri {

            char ad[40];

            char soyad[40];

            int No;

            struct ders dersler[5];

     };

int main(){
    srand(time(NULL));
struct sahis_bilgileri kisiler[5];
int i,j;
for ( i = 0; i < 5; i++)
{
     printf("%d. Öğrencinin adı:",i+1);
    scanf(" %s",kisiler[i].ad);
        printf("%d. Öğrencinin soyadı:", i+1);
      scanf(" %s",kisiler[i].soyad);
     printf("%d. Öğrencinin no:" ,i+1);
        scanf("%d",&kisiler[i].No);
        printf("%d.kullanıcının ders notlarını random atadım\n",i+1);
    for ( j= 0; j < 5; j++)
    {
        kisiler[i].dersler[j].ders_kod=j+1;
        kisiler[i].dersler[j].final=rand()%100;
         kisiler[i].dersler[j].vize=rand()%100;
          kisiler[i].dersler[j].gecmenotu=(kisiler[i].dersler[j].final*0.6)+(kisiler[i].dersler[j].vize*0.4);
    }
  
}
for ( i = 0; i < 5; i++)
{
     printf("%d. Öğrencinin adı-soyadı: %s %s no:%d\n", i+1,kisiler[i].ad,kisiler[i].soyad,kisiler[i].No);
    
    for ( j= 0; j < 5; j++)
    {
        printf("%d. ögrencinin %d kodlu ders geçme notu:%.2f\n",i+1,j+1,kisiler[i].dersler[j].gecmenotu);
    }
}

    return 0;
}

