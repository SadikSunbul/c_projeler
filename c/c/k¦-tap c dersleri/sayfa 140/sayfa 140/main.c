//
//  main.c
//  sayfa 140
//
//  Created by Sadık Sünbül on 22.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int intsayi=5;
    unsigned int kacbayt=sizeof(intsayi);
    printf("inttipinin belleke kapladıgı alan: %d byte \n", kacbayt);
    
    
   /* int a=5;
    int b;
    
    b= (++a + a++ * --a);
    
    printf("a=%d\n",a);
    printf("b=%d\n",b);  */
    
    
    int a=5,b=13,c=8,x;
    
    a+=2;   //burda a degerı 7 oluyor ama a 7 de kalmıyor
    b-=a++;  //burada a degerını 8 yapıyor
    c*=--b;
    x= ++a * b-- % ++c;  //burda a degerı 9 oluyor  deger degerlerde aynı sekıde artıyor veya azalıyor
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("x=%d\n",x);
    
    
    
    return 0;
}
