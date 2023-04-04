//
//  main.c
//  sayfa 232
//
//  Created by Sadık Sünbül on 24.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int sayı=0;
    int i;
    int j;
    
    printf("bır sayı gırınız:");
    scanf("%d",&sayı);
    
    for (i=0; i<sayı; i++)
    {
        for (j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
   
    
    
    
    
    
    
    return 0;
}
