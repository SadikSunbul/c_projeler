#include <stab.h>
#include <stdio.h>
#include<string.h>

struct ogrenci

{
    char isim[20];
    char soyisim[20];
    float ortalama;
};



int main(){
    //struct nedir

   
    struct ogrenci ogr1={"sadık","sunbul",3.74}; //verı tıpı sutruct ogrencı , degısken ısımı:ogr1
    struct ogrenci ogr2;
    
    strcpy(ogr2.isim,"duygu");   //char oldugu ıcın atamalar = ıle yapılamaz hata verır
    strcpy(ogr2.soyisim,"sunbul");
    ogr2.ortalama=3.70;

printf("-------\n");
    printf("ogr2 degıskenın ısmı %s \n",ogr2.isim);
    printf("ogr2 soyısımı:%s \n",ogr2.soyisim);
    printf("ogr2 nın ortalaması %f \n",ogr2.ortalama);
printf("---------\n");
    printf("ogr1 degıskenın ısmı %s \n",ogr1.isim);
    printf("ogr1 soyısımı:%s \n",ogr1.soyisim);
    printf("ogr1 in ortalaması %f \n",ogr1.ortalama);
printf("----------\n");

    return 0;
}