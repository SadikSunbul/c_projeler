//
//  main.c
//  sayfa 208
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int sayı=0;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayı);
    
    switch(sayı)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("hafta ıcı\n");
            break;
        case 6:
            
        case 7:
            printf("hafta sonu\n");
            break;
            
    }
   
    
    
    
    return 0;
}
