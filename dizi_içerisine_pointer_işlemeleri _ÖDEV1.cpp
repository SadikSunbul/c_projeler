#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *dosya;
  dosya = fopen("sayi.txt", "w");
  if(dosya == NULL){
    printf("Dosya açýlamadý!");
    exit(1);
  }
  
  int i;
  for(i=0; i<100; i++){
    int sayi = rand() % 101; // 0-100 arasý rastgele tam sayý
    fprintf(dosya, "%d\n", sayi); // dosyaya yazma
  }
  
  fclose(dosya); // dosyayý kapatma
  
  // dosyadan okuma ve 5. biti 0 olanlarý dinamik diziye aktarma
  dosya = fopen("sayi.txt", "r");
  if(dosya == NULL){
    printf("Dosya açýlamadý!");
    exit(1);
  }
  
  int *dizi = NULL; // dinamik dizi baþlangýçta NULL olarak tanýmlanýr
  int elemanSayisi = 0;
  
  while(!feof(dosya)){ // dosya sonuna kadar okuma yap
    int sayi;
    fscanf(dosya, "%d", &sayi); // dosyadan okuma
    
    if((sayi & (1 << 4)) == 0){ // 5. biti 0 olanlarý seç
      elemanSayisi++;
      dizi = realloc(dizi, elemanSayisi * sizeof(int)); // dinamik dizi boyutunu arttýr
      dizi[elemanSayisi-1] = sayi; // dinamik diziye eleman ekle
    }
  }
  
  fclose(dosya); // dosyayý kapatma
  
  // dinamik dizi elemanlarýný ekrana yazdýrma
  printf("5. biti 0 olan tam sayýlar:\n");
  for(i=0; i<elemanSayisi; i++){
    printf("%d\n", dizi[i]);
  }
  
  free(dizi); // dinamik dizi bellekten serbest býrakma
  
  return 0;
}

