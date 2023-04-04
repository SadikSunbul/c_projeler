//
//  main.c
//  sayfa 332
//
//  Created by Sadık Sünbül on 26.10.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char kullanıcıadı[20];
    unsigned long karaktersayısı=0;
    printf("kullanıcı adınızı gırınız:");
    scanf("%s",kullanıcıadı);
    
    karaktersayısı=strlen(kullanıcıadı);
    
    if(karaktersayısı<6)
    {
        printf("kullanıcı adı en az 6 karakterden olusmalıdır!!!\n");
        
    }
    else
    {
        printf("kullanıcı adınız gecerlı\n");
        
    }
    
    char dizi1[20]="merhaba";
    char dizi2[20];
    
    //ilk diziyi ıkıncısıne kopyalayalım
    
    strcpy(dizi2, dizi1);  //bu rada dizi1 ı dızı 2 ye kopyalar ve dondurur
    
    //her ıkı dızınınde degerını ekrana yadır
    
    printf("dizi1 ->%s\n",dizi1);
    printf("dizi2 ->%s\n",dizi2);
    
    
    
    
    
   
    
    
    return 0;
}
