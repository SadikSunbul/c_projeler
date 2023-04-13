#include <stdio.h>
#include <stdlib.h>

int main(){
  int *dizi = NULL; // dinamik dizi ba�lang��ta NULL olarak tan�mlan�r
  int elemanSayisi = 0;
  
  while(1){ // sonsuz d�ng�
    int sayi;
    printf("Bir tam say� girin: ");
    scanf("%d", &sayi);
    
    if(sayi < 0){
      break; // negatif say� girildi, d�ng�y� sonland�r
    }
    
    if(sayi % 3 == 0 && sayi % 5 == 0){ // 3 ve 5'e tam b�l�nebilenleri se�
      elemanSayisi++;
      dizi = realloc(dizi, elemanSayisi * sizeof(int)); // dinamik dizi boyutunu artt�r
      *(dizi + elemanSayisi-1) = sayi; // dinamik diziye eleman ekle
    }
  }
  
  // dinamik dizi elemanlar�n� ekrana yazd�rma
  printf("3'e ve 5'e tam b�l�nen tam say�lar:\n");
  for(int i=0; i<elemanSayisi; i++){
    printf("%d\n", *(dizi + i));
  }
  
  free(dizi); // dinamik dizi bellekten serbest b�rakma
  
  return 0;
}

