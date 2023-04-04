#include <stdio.h>


int main(){

//int dizi[satır][stun];
int dizi[10][10]={{0,1,2},{3,4,5},{6,7,8}}; //satır sayısı bos gecılebılır ama stuns ayısını bos gecemeyız
                 //1.satır //2.satır//3.satır
                //ictekı degerler{ stun degerılerıdır };

                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        
                        if (i==0&&j==0)
                        {
                         printf("\033[1;31m%d \033[0m",dizi[i][j]); //renk verırız burda 
                        }else if(i==9&&j==9){
                            printf("\033[1;34m%d \033[0m",dizi[i][j]);
                        }
                        else
                        {
                            printf("%d ",dizi[i][j]);
                        }
                        
                    }
                    printf("\n");
                }
                printf("-------------- \n");
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        dizi[i][j]=i*j;
                    }
                    
                }
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        printf("%d\t",dizi[i][j]);
                    }
                    printf("\n");
                }
                /* İLK DEGER SATIR IKINCI DEGER STUN BURADAN BIZIM BIR ALGORITMA CIKARMAMIZ GERERKIR
                A00 A01 A02 A03 A04
                A10 A11 A12 A13 A14
                A20 A21 A22 A23 A24
                A30 A31 A32 A33 A34
                A40 A41 A42 A42 A44
                */
                
    return 0;
}