#include <stdio.h>


int main(){

//int dizi[satır][stun];
int dizi[10][10]={{0,1,2},{3,4,5},{6,7,8}}; //
                 //1.satır //2.satır//3.satır
                //ictekı degerler{ stun degerılerıdır };

                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        printf("%d",dizi[i][j]);
                    }
                    
                }
                
    return 0;
}