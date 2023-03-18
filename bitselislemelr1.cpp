#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayi, i;
    FILE *dosya0, *dosya1;
    dosya0 = fopen("sayilar0.txt", "w");
    dosya1 = fopen("sayilar1.txt", "w");

    srand(time(NULL)); // Rastgele sayý üretmek için zamaný kullan

    for (i = 0; i < 100; i++) {
        sayi = rand() % 101; // 0 ile 100 arasýnda rastgele sayý üret
        if ((sayi & 16) == 0) { // 5. biti 0 mý?  [ 0000 0000 0001 0000 ] çarp 0 sa 5. bit 0 dýr
            sayi |= 8; // 4. biti 1 yap  [ 0000 0000 0000 1000 ] topla dedik
            fprintf(dosya0, "%d\n", sayi);
        }
        else { // 5. biti 1 mi?  o degilse 5. bit 1 
            sayi &= ~4; // 3. biti 0 yap   [ 0000 0000 0000 0100]  4 degil dedik --->[ 1111 1111 1111 1011] oldu bunuda carptýk 
            fprintf(dosya1, "%d\n", sayi);
        }
    }

    fclose(dosya0);
    fclose(dosya1);
    return 0;
}
