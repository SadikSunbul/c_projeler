#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
/*
//array sıralaması kullanıcaz 
char dizi1[10];
char dizi2[10];
printf("bır dızı gırınız:");
scanf("%s",dizi1);
printf("bir dizi daha gırınız:");
scanf("%s",dizi2);
int i,j,eleman,sorgu=1;
int karaktersayısı1=0,karaktersayısı2=0;

karaktersayısı1=strlen(dizi1);
karaktersayısı2=strlen(dizi2);
if(karaktersayısı1!=karaktersayısı2){
    puts("anagram değiller");
}else
{

for ( i = 1; i <karaktersayısı1; i++) //burada sıralama ayaptırdık 
{
    eleman=dizi1[i];
    for ( j = 0; j >0 && eleman<=dizi1[j]; j--)
    {
        dizi1[j+1]=dizi1[j];
    }
    dizi1[j+1]=eleman;
}
for ( i = 1; i <karaktersayısı2; i++) //burada sıralama ayaptırdık 
{
    eleman=dizi2[i];
    for ( j = 0; j >0 && eleman<=dizi2[j]; j--)
    {
        dizi2[j+1]=dizi2[j];
    }
    dizi2[j+1]=eleman;
}
for ( i = 0; i <karaktersayısı1 ; i++)
{
    if (dizi1[i]!=dizi2[i])
    {
        sorgu=0;
        break;
    }
    
}
if (sorgu)
{
    puts("anagram ");
}else{
    puts("anagram değil");
}


}

*/

char kullanıcıgırdısı[20],buyukcıktı[5];
int i=0,j=0;

puts("lutfenn strıngı gırınız");
gets(kullanıcıgırdısı);
kullanıcıgırdısı[i]=toupper(kullanıcıgırdısı[i]);
buyukcıktı[j]=toupper(kullanıcıgırdısı[i]);
i++;j++;
while(kullanıcıgırdısı[i]!='\0'){
    if(kullanıcıgırdısı[i]==' '){
        i++;
        kullanıcıgırdısı[i]=toupper(kullanıcıgırdısı[i]);
        buyukcıktı[j]=toupper(kullanıcıgırdısı[i]);
        j++;
    }
    i++;
}
puts(kullanıcıgırdısı);
puts(buyukcıktı);



    return 0;
}