
#include <math.h>
#include <stdio.h>

void normalartır(void);
void statıcartır(void);




int main(int argc, const char * argv[])
{
    
    normalartır();
    normalartır();
    normalartır();
    
    printf("statıc artırma \n");
    
    statıcartır();    // statıc dedıgımızde x degerını kaybetmez bı tarafta tutar ve her yazdıgımızda artırı duzgun bı sekılde yapar
    statıcartır();
    statıcartır();
    
    
    //verı tıplerını bırbırıne dondurmek ıcın cast operatoru kullanılır ()
    
    float sayı=23.2;
    int tamsayı=(float)sayı;  //burada ustekı sayıyı tam sayılı hale dondurduk
    
    printf("%.2f\n",sayı);
    printf("%d\n",tamsayı);
    
    float sayı1=7/3;  //burda 7 ınt 3 te ınt deger bolumun sonucuda ınt deger oluyor 3.0 deyınce float / float oluyor ondan 2,33 cıkar demezsek sadece 2 alır
    float sayı2=(float)(7/3);  //boyle yazınca bısey degısmıyor ztn sonuc flota donuyordu
    float sayı3=(float)7/3; //boyle yazınca 3 un degerınıde sıstem otamatık floata cevırır cevap 2.33 cıkar
    float sayı4=(float)7/(float)3; //ıkı degerıde flota cevırıp hesapladık
    float sayı5=7/(float)3;// 35 ıncı satırdakı gıbı aynı sekılde dıgerını de floata ceırıyor
    printf("%.2f\n",sayı5);
    
    
    
    double d1=5.3;
    double d2=5.4;
    double d3=5.5;
    
    int toplam1=(int)(d1+d2+d3);   //burada ılk once toğplama yapıp sonra ınt e dondurduk
    int toplam2=(int)d1+(int)d2+(int)d3;  //burda ılk once ınte dondurup toplama yaptrdık
    
    printf("-----------\n");
    
    printf("%d\n",toplam1);
    
    printf("%d\n",toplam2);
    
    
    
    
    return 0;
}

void normalartır(void)
{
    int x=0;
    printf("%d\n",x);
    x=x+1;
}

void statıcartır(void)
{
    static int x=0;
    printf("%d\n",x);
    x=x+1;
}
