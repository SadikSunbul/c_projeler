//
//  main.c
//  sayfa 218
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>


int main(int argc, const char * argv[])
{
    int toplam=0;
    int sayac=1;
    
    while (sayac<=10)
    {
        toplam=toplam+sayac;
        sayac++;
    }
    printf("sayıların toplamı :%d\n",toplam);
    
    
    
    
    return 0;
}
