#include <stdio.h>

struct isci
{
    char adi[30];
    char soyadi[30];
    int yas;
    double aylikucret;
};

struct isci isci_al(){
    struct isci isci1;
    puts("Kullanicin adini giriniz:");
    gets(isci1.adi);
     puts("Kullanicin soyadini giriniz:");
    gets(isci1.soyadi);
     puts("Kullanicin yasini girniz:");
    scanf(" %d",&isci1.yas);
 puts("Kullanicin aylik ucretini giriniz");
    scanf(" %d",&isci1.aylikucret);

return isci1;
}

int main(){
  
    

struct isci x =isci_al();
 
    printf("-------------\n");
       printf("Kullanicin Adi:%s\n",x.adi);
       printf("Kullanicin soyadi:%s\n",x.soyadi);
       printf("kulllanicin yasi:%d\n",x.yas);
       printf("kullanicin aylik ucreti:%d\n",x.aylikucret);
  


    return 0;
}
