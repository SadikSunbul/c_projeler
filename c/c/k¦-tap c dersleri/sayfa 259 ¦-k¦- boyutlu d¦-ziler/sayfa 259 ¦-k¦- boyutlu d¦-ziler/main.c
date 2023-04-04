//
//  main.c
//  sayfa 259 ıkı boyutlu dıziler
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    
    int matris[3][3]={  //burada ıkı boyutlu bı tablo olusturduk 1. satır 1. srundakı degeerını oku vs dıye bılırız jonumunu vereerk
        {1,1,1},//1. satır
        {2,2,2},//2.satır
        {3,3,3}};//3.satır gıbı yazıp konumsal larak degeerler bulunur
    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)  //
        {
            printf("matris [%d][%d]=%d\n",i,j,matris[i][j]);
        }
    }
    
    //dızılerde en cok yapılan ıslemleer sıralama ve arama ıslemlerıdır
    
    
    
    
    
    
    return 0;
}
