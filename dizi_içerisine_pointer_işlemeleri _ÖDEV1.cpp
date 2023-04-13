#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *dosya;
  dosya = fopen("sayi.txt", "w");
  if(dosya == NULL){
    printf("Dosya a��lamad�!");
    exit(1);
  }
  
  int i;
  for(i=0; i<100; i++){
    int sayi = rand() % 101; // 0-100 aras� rastgele tam say�
    fprintf(dosya, "%d\n", sayi); // dosyaya yazma
  }
  
  fclose(dosya); // dosyay� kapatma
  
  // dosyadan okuma ve 5. biti 0 olanlar� dinamik diziye aktarma
  dosya = fopen("sayi.txt", "r");
  if(dosya == NULL){
    printf("Dosya a��lamad�!");
    exit(1);
  }
  
  int *dizi = NULL; // dinamik dizi ba�lang��ta NULL olarak tan�mlan�r
  int elemanSayisi = 0;
  
  while(!feof(dosya)){ // dosya sonuna kadar okuma yap
    int sayi;
    fscanf(dosya, "%d", &sayi); // dosyadan okuma
    
    if((sayi & (1 << 4)) == 0){ // 5. biti 0 olanlar� se�
      elemanSayisi++;
      dizi = realloc(dizi, elemanSayisi * sizeof(int)); // dinamik dizi boyutunu artt�r
      dizi[elemanSayisi-1] = sayi; // dinamik diziye eleman ekle
    }
  }
  
  fclose(dosya); // dosyay� kapatma
  
  // dinamik dizi elemanlar�n� ekrana yazd�rma
  printf("5. biti 0 olan tam say�lar:\n");
  for(i=0; i<elemanSayisi; i++){
    printf("%d\n", dizi[i]);
  }
  
  free(dizi); // dinamik dizi bellekten serbest b�rakma
  
  return 0;
}

