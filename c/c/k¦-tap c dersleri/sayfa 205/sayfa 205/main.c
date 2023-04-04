//
//  main.c
//  sayfa 205
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    //not degerını kullanıcıdan al
    
    float not=0;
    printf("lutfen donem sonu not ortalamanızı gırınız:");
    scanf("%f",&not);
    
    //gırılen degerın gecerlılıgını kontrol et ve gecerlılık yerını yaz
    
    if(not>100||not<0)
    {
        printf("girdiğiniz deger 0-100 arasında olmalıdır \n");
    }
    else if(not>=92)
    {
        printf("harf notunuz : AA\n");
    }
    else if(not>=85)
    {
        printf("harf notunuz :BA\n");
    }
    else if(not >=80)
    {
        printf("harf notunuz : BB\n");
    }
    else if(not>=75 )
    {
    printf("harf notunuz :CB\n");
    }
    else if(not >=67)
    {
        printf("harf notunuz : cc\n");
    }
    else if(not >=58)
    {
        printf("harf notunuz : DC\n");
    }
    else if(not >=50)
    {
        printf("harf notunuz : DD\n");
    }
    else
    {
        printf("harf notunuz : FF\n");
    }
    
    
    
    
    return 0;
}
