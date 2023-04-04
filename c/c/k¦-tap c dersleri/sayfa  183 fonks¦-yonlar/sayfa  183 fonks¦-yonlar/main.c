//
//  main.c
//  sayfa  183 fonksıyonlar
//
//  Created by Sadık Sünbül on 25.10.2022.
//

#include <stdio.h>
#include <math.h>

int main()
{
    
    
    
    
    
    
    
    return 0;
}
int bolunebiliyormu(int bolunen,int bolen)
{
    if(bolen%bolen==0)
        return 1;
    else
        return 0;
}

int obebbul(int sayi1,int sayi2)
{
    int küçüksayı=sayi1;
    if(sayi2<sayi1)
    {
        küçüksayı=sayi2;
    }
    for (int i=küçüksayı; i>0; i--)
    {
        if(boluneiliyormu(sayi1,i)==1&&boluneiliyormu(sayi2,i)==1){
            return i;
        }
    }
}
