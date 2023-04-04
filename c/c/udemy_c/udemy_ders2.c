#include <stdio.h>
#include <string.h>

struct ogrenci
{
     char isim[20];
    char soyisim[20];
    float ortalama;
};



int main(){
    struct ogrenci ogrencıler1[3];
    
    for (int i = 0; i < 3; i++)
    {
        puts("Lütfen kullanıcın adını gırınız:");
        scanf("%s",&ogrencıler1[i].isim);
         puts("Lütfen kullanıcın soyisim gırınız:");
        scanf("%s",&ogrencıler1[i].soyisim);
         puts("Lütfen kullanıcın ortalaması gırınız:");
        scanf("%f",&ogrencıler1[i].ortalama);
    }
    for (int  i = 0; i < 3; i++)
    {
        printf("%d. ogrencınn adı %s-soyadı%s ve ortalamsı%.2f \n",i+1,ogrencıler1[i].ismi,ogrencıler1[i].soyismi,ogrencıler1[i].ortalama);
    }
    




    struct ogrenci ogrenciler[]={{"ogun","birinci",3.70},{"sadık","sünbül",3.90},{"taha","boyraz",2.3}};
    printf("ogrencinin isim :%s\n",ogrenciler[0].isim);
    printf("ogrencinin soyısım :%s\n",ogrenciler[0].soyisim);
    printf("ogrencinin isim :%f\n",ogrenciler[0].ortalama);
 printf("ogrencinin isim :%s\n",ogrenciler[1].isim);
    printf("ogrencinin soyısım :%s\n",ogrenciler[1].soyisim);
    printf("ogrencinin isim :%f\n",ogrenciler[1].ortalama);
     printf("ogrencinin isim :%s\n",ogrenciler[2].isim);
    printf("ogrencinin soyısım :%s\n",ogrenciler[2].soyisim);
    printf("ogrencinin isim :%f\n",ogrenciler[2].ortalama);

    return 0;
}