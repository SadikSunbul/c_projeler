//
//  main.c
//  sayfa 142 ornek
//
//  Created by Sadık Sünbül on 22.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x=5,y=6;
    int w=5,z=4;
    
    printf(x<y?"x<y\n":"x>=y\n");  //en soldakı deger dogruysa 1. yı degılse 2. yı okur
    printf(x>z ? "x>z\n":"x<=z\n");
    printf(w !=x?"w!=x\n":"w==x\n");
    
    printf("------------\n");
    
    unsigned char a=224;
    unsigned char b=0;
    unsigned char c=31;
    
    unsigned char andSonuc1=a&b;
    unsigned char andSonuc2=a&c;
    unsigned char orSonuc1=a | b;
    unsigned char orSonuc2=a|c;
    unsigned char xorSonuc1=a^b;
    unsigned char xorSonuc2=a^c;
    unsigned char nega=~a;
    unsigned char negb=~b;
    unsigned char negc=~c;
    
    
    printf("%d\n",andSonuc1);
    printf("%d\n",andSonuc2);
    
    printf("%d\n",orSonuc1);
    printf("%d\n",orSonuc2);
    
    printf("%d\n",xorSonuc1);
    printf("%d\n",xorSonuc2);
    
    printf("%d\n",nega);
    printf("%d\n",negb);
    printf("%d\n",negc);
    
    
    
    
    
    
    return 0;
}
