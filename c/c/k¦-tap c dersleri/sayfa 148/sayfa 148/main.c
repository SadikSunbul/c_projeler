//
//  main.c
//  sayfa 148
//
//  Created by Sadık Sünbül on 22.10.2022.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
   
    char * isim1="sadık";
    char * isim2="ali";   //burada [20] vs seylere gerek kalmadan * koyarak yazmak en ıyısı
    
    char isim3[20]="asdhjkasfş";
    
    printf("ısım1=%s\n",isim1);
    
    printf("ısım2 :%s\n",isim2);
    
    printf("ısım3=%s\n",isim3);
    
    
    
    int tamsayi=123;
    int *isaretci;
    //tam sayı degıskenının bellek adresını ısaretcı degıskenıne kopyala
    isaretci=&tamsayi;
    
    printf("isaretci[p gosterimi]:%p\n",isaretci);  //burada 123  sayısının bellekte tutuldugu yer gsterıyor
    
    
    //short ıcın %hd,hi,hu
    //long için %ld,li,lu,lf,le,lg
    
    float sayi1=2321.66;
    float sayi2=23.6;
    
    printf("sola dayalı\n");
    printf("-----------\n");
    printf("sayı1 :%10.2f\n",sayi1);
    printf("sayıı2 :%10.2f\n",sayi2);   //uburada 10.2f dedık 10 burda sayıları saga dayalı gosterır
    printf("---------\n");
    printf("sayı1 :%-10.2f\n",sayi1);   // burada -10.2f sayılar sola dayalı yazar
    printf("sayı2 :%-10.2f\n",sayi2);
    
    
    int x=-108;
    int y=128;
    
    printf("% d\n",x);
    printf("% d\n",y);
    printf("---------\n");
    
    int a=1,b=50,c=223;
    
    printf("%05d\n",a);  //burada 5 karakterlı olucak dedık ve basına sıfır koy dedık
    printf("%05d\n",b);
    printf("%03d\n",c);
    
    char kelime[40];
    
    printf("lutfen ısmınızı gırınız:");
    scanf("%s\n",kelime);
    
    printf("adınız : %s\n",kelime);
    
    
    
    return 0;
}
