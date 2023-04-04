//
//  main.c
//  SAYFA 172
//
//  Created by Sadık Sünbül on 23.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
  //  char ch;
   // printf("bır karakter gırın ve entr tusuna basınız:");
    // ch=getchar();  //ch a bir karakter tanımlıyor burda  girdi //bırden fazla karakter gırersek ılk karkterı tutar
    // printf("gırıdıgınız karakter :");
    // putchar(ch);  //cıktı saglar
    
    //putchar(10);  //bu ıfade 1 alt satıra gecmemızı saglar  10 sayısının ASCII da \n demek tır
    
    
   // char x;
    
   // x=getche();  buradakı nı wındowsta dene bıde
//     printf("\ngırdıgınız karakter:%c\nprogramsonlandi\n",x);
    int y;
    int x;
    printf("ltfen 2 sayı gırınız:");
    scanf("%d %d",&x,&y);
    
    printf("bırıncı sayı:%d\n",x);
    printf("ıkıncı sayı :%d\n",y);
    
    printf("%d mod %d : %d \n",x,y,x%y);
    
    
//    int sayı;
//    printf("bır sayı gırınız:");
//    scanf("%x\n",&sayı);
    
//    printf("hexdasımal gosterımı:%X\n",sayı);
    
    
    return 0;
}
