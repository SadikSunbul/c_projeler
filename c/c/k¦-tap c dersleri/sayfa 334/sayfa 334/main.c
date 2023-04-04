//
//  main.c
//  sayfa 334
//
//  Created by Sadık Sünbül on 26.10.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char dizi1[20]="merhaba ";
    char dizi2[20];
    
    //kullanıcının ısmını okuyalım
    
    printf("isminizi giriniz:");
    scanf("%s",dizi2);
    
    //kullanıcının gırdıgı ısım dizi1 in sonuna ekleyelım
    
    strcat(dizi1, dizi2);
    
    printf("%s\n",dizi1);
    
    
    
    
    
    
    
    
    return 0;
}
