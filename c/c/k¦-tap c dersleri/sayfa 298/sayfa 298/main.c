//
//  main.c
//  sayfa 298
//
//  Created by Sadık Sünbül on 25.10.2022.
//
//fonksıyonlara bıdah bak sayfa 298
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int çarpım;
    //programına adı da bır parmetre olarak sayıldıgı ıcın parametre sayısının 3 olması beklenır
    if(argc !=3)
    {
        printf("parametre sayısı 2 olmalıdır !\n");
        //parametre sayısı yanlıs ıse programı sonlandıralım
        exit(1);
    }
    else
    {
        //programın her bır parametresını yazdıralım
        printf("\n------------\n");
        printf("program adı:%s\n",argv[0]);
        printf("PArametre 1:%s\n",argv[1]);
        printf("parametre 2:%s\n",argv[2]);
        printf("\n----------------\n");
        
    }
    //parametreler string oldugu ıcın atoı ile inte donusturup carpalım
    çarpım=atoi(argv[1])*atoi(argv[2]);
    printf("carpım sonuc ->%s x %s =%d\n",argv[1],argv[2],çarpım);
    
    
    
    
    
    return 0;
}
