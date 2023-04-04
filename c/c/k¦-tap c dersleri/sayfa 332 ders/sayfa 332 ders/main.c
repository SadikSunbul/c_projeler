#include <stdio.h>
#include <string.h>
int main() {
    
    char dizi1[120];
    char dizi2[120];
    puts("1. diziyi giriniz:");
    gets(dizi1);
    
    puts("1.dizinin içinden olup olmadıgını sorgulanacak kelıme:");
    gets(dizi2);
    
    char* p1=strstr(dizi1,dizi2);
    
    puts(p1);
 
    return 0;
}
