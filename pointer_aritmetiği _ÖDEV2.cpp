#include <stdio.h>
#include <stdlib.h>

int main(){
  int *dizi = NULL; // dinamik dizi baþlangýçta NULL olarak tanýmlanýr
  int elemanSayisi = 0;
  
  while(1){ // sonsuz döngü
    int sayi;
    printf("Bir tam sayý girin: ");
    scanf("%d", &sayi);
    
    if(sayi < 0){
      break; // negatif sayý girildi, döngüyü sonlandýr
    }
    
    if(sayi % 3 == 0 && sayi % 5 == 0){ // 3 ve 5'e tam bölünebilenleri seç
      elemanSayisi++;
      dizi = realloc(dizi, elemanSayisi * sizeof(int)); // dinamik dizi boyutunu arttýr
      *(dizi + elemanSayisi-1) = sayi; // dinamik diziye eleman ekle
    }
  }
  
  // dinamik dizi elemanlarýný ekrana yazdýrma
  printf("3'e ve 5'e tam bölünen tam sayýlar:\n");
  for(int i=0; i<elemanSayisi; i++){
    printf("%d\n", *(dizi + i));
  }
  
  free(dizi); // dinamik dizi bellekten serbest býrakma
  
  return 0;
}

