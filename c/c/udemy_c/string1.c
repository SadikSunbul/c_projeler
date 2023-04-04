#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
//char *isim="ogun"; pointer...
//char isim[20]="ogün";//20 byt yer ayırır  ---'o','g','ü','n','\0'--- diğer 6.7.8.....20.byt bosa gıttı
//drekt atama yapıcaksak elema atamaay agerek yok   char isim[]="ogün";
/*
char isim[20];
scanf("%s",isim); //dışarıdan strıng alma ıslemımın dısarıdan & ısaretıne gerek yok dızının ısmı aynı zamnda adres adıdır...
printf("%s",isim);//nul karakter strıngın sona geldıgını anlarız


char isimler[maxkelımesayısı][maxharfsayısı]={};
*/
/*
char isimler[][10]={"ogün","duygu","eda","burak"};
char soyisimler[][10]={"birinci","sunbul","denız","ikinci"};
int i;
for ( i = 0; i < 4; i++)
{
    printf("ogrencını adı-soyadı:%c.%s \n",isimler[i][0],soyisimler[i]); //burada o.birinci olur isimin ilk harfıne ulastık...
}*/


// puts =printf    gets = scanf benzer   biçimlendirme yaptırmaz puts gets


/*
char isim[20];
puts("Lütfen adınızı giriniz"); //degıskensız yazmak boyle alt satıra gecme ıfdesını kendısı koyuyor...
gets(isim);
puts(isim);//degıskenın degerı %s demek yok
*/





/*
strlen:gonderdiğimiz stringin karakter uzunluğunu size döner.
ogün ------>4 adet karakter var (null karakterı dıkate almaz)

strcpy : gonderdıgınız 2 strıngın 2.sını 1. ye kopyalar stringlerde = yapamayız
isim1:ogün
isim2:duygu

isim1=yerıne duygu yazdırır


strcat: gonderdıfgımız 2. strıngı 1. strıngın sonuna ekler
isim1=ogun
isim2=birinci

isim1=ogun birinci

strcmp : gönderdiğiniz iki stringi karşılaştırır.
birbiriyle tamamen aynılarsa 0 doner
ılkı ıkıncıden alfabetık olarak sonra geliyorsa 0 dan buyuk bır deger doner
ılkı ıkıncıden alfabetık olarak önce geliyorsa 0 dan küçük bır deger doner

isim1=ogün
isim2=duygu

21 gıbı bır deger doner bıze 
*/
char isim[20];
char isim2[20];
puts("lütfen bır ısım gırınız:");
gets(isim);
puts("lütfen bır ısım daha gırınız");
gets(isim2);
strcat(isim2,isim); //ilk gırılenın sonuna sonra gırılenı ekledı ılk son dedıgım (ilk,son)  a A farklıdır aynı anama gelmez ısaı tabloya gore 
int karsılastırma=strcmp(isim2,isim);//karsılastırma yapıcak
if (karsılastırma==0)
{
    printf("iki strın bırbırın aynısıdır ");
}else if(karsılastırma>0){
    printf("ilk strıng alfabetık oalrak ıkıncıden sonra gelmektedır");
}else{
    printf("ilk strıng alfabetık olarak ıkıncı den once gelıyor");
}


strcpy(isim2,isim); //isim dekı degerı isim2 ye aktardık burada isim2=isim yapamayız hata verır 
int karektersayısı=strlen(isim);  //(bosluguda sayar)
printf("%d adet karekter ıcermektedır.",karektersayısı); 


    return 0;
}