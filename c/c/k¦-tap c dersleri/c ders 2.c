#include <stdio.h>
#define Z 3.14

int carpmaYap(int a,int b)
{
    int c;
    c=a*b;
    return c;

}

int toplamc(int a)
{
    int c;
    c=(a*(a+1))/2;
    return c;

}




int main()
{
    int yaricap;
    float cevre;

    printf("\n yarıcapı gırınız:");
    scanf("%d",&yaricap);


    cevre=2*Z*yaricap;
    printf("daırenın cevresi :%.2f\n",cevre);

    printf(" carpma ıslemının sonucu :%d\n",carpmaYap(5,5));
printf("-------------------\n");

    int sayi1,sayi2,sonuc;  //burada yenı kullanıcagımız sayıları yazdık 
    
    printf("çarpma işlemi için iki tamsayı giriniz:\n");
    scanf("%d %d",&sayi1,&sayi2); //burada sayı1 ve sayı2 ye deger verdık 
        //buraya cok dıkat sayısal bır verıyı yazarken basına & ısaretı konulmalı hep unutuyoruz 
        sonuc=carpmaYap(sayi1,sayi2); //burda sonuc ıye bısey olusturduk onu carpma(sayı1,sayı2 )e esıtledık 

    printf("çarpma işleminin sonucu :%d\n",sonuc);  //burda yadırdık sonuc dedeık cnku carpamyı esıtlemıstık sonuca

    printf("----------------\n");

    int z,toplami;
    printf("nereye kadar toplanıcak sayıyı grınız :\n");
    scanf("%d",&z);       //sayısal verılerde & unutma 

    toplami=toplamc(z);
    printf("sectıgınız sayıya kadar olansayıların toplamı :%d\n",toplami);

    printf("--------------\n");

    



    return 0;
}