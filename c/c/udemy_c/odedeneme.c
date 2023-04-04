#include <stdio.h>
struct isci bilgial(struct isci x);
struct isci{
           char adi[30];
           char soyadi[30];
           int yas;
           double aylikucret;
        };


int main(){

struct isci isci1;
struct isci q=bilgial(isci1);

printf("Kullanıcın ismi-soyismi: %s %s yaşı:%d aylıkucreti:%d",q.adi,q.soyadi,q.yas,q.aylikucret);


    return 0;
}

struct isci bilgial(struct isci x){
    printf("Kullanicinin ismini giriniz:");
    gets(x.adi);
    printf("Kullanicinin soyadi:");
    gets(x.soyadi);
    printf("Kullanicinin yasi:");
    scanf("%d",&x.yas);
    printf("kullanicin aylik ucreti:");
    scanf("%d",&x.aylikucret);
    return x;
}
