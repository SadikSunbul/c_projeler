//
//  main.c
//  sayfa 22
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[])
{
    int sayi;
    int sayac=0;
    printf("bu program kullanıcının gırdıgı sayıya kadar\n");
    printf("olan tum sayılarım karakterını gosterır.\n");
    printf("---------\n");
    
    printf("lutfen bır sayı gırınız:");
    scanf("%d",&sayi);
    
    while (sayac<=sayi)
    {
        printf("%d sayısının karesi:%d\n",sayac,sayac*sayac);
        sayac++;
    }
    
    int x=0;
    do
    {
        printf("karekokunu almak ıstedıgınız sayıyı gırınız:\n");
        printf("(programdan cıkmak ıcın 0 degerını gırınız):");
        scanf("%d",&x);
        
        double root=sqrt((double)x);
        printf("---------------\n");
        printf("gırılen deger:%d\n",x);
        printf("karekoku:%.2f\n",root);
        printf("--------------\n");
    }while(x!=0);  //sıfırdan faklı bır deger verdıgımız ıcın hıc cıkmıyor
    
        printf("programdan çıkılıyor...\n");
    
    
    
    int a;
    int b;
    
    for (a=4,b=6; a*b<100; a++,b+=2)
    {
        printf("a degıskenının su ankı degerı:%d\n",a);
        printf("b degıskenının su ankı degerı:%d\n",b);
        printf("carpımının sonucu:%d\n",a*b);
    }
    
    
    return 0;
}
