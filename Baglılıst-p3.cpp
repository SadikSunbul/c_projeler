#include <stdio.h>
#include <stdlib.h>

struct OGRENCI {
    int id;
    float vize;
    float final;
    float ortalama;
    struct OGRENCI *sonraki;
};

float OrtalamaHesapla(float vize, float final) {
    return (vize * 0.4) + (final * 0.6);
}

void OgrEkle(struct OGRENCI **baslangic) {
    struct OGRENCI *temp = malloc(sizeof(struct OGRENCI));
    printf("Ogrenci ID'sini girin: ");
    scanf("%d", &(temp->id));
    printf("Vize Notunu Girin: ");
    scanf("%f", &temp->vize);
    printf("Final Notunu Girin: ");
    scanf("%f", &temp->final);
    temp->ortalama = OrtalamaHesapla(temp->vize, temp->final);
    temp->sonraki = NULL;

    if (*baslangic == NULL) {
        *baslangic = temp;
    } else {
        struct OGRENCI *iter = *baslangic;
        while (iter->sonraki != NULL) {
            iter = iter->sonraki;
        }
        iter->sonraki = temp;
    }
}

void OrtalamalariHesapla(struct OGRENCI *baslangic) {
    if (baslangic == NULL) {
        printf("Liste Bos\n");
        return;
    }

    float toplamOrtalama = 0;
    int ogrenciSayisi = 0;

    while (baslangic != NULL) {
        ogrenciSayisi++;
        printf("ID: %d, Vize: %.2f, Final: %.2f, Ortalama: %.2f\n", baslangic->id, baslangic->vize, baslangic->final, baslangic->ortalama);
        toplamOrtalama += baslangic->ortalama;
        baslangic = baslangic->sonraki;
    }

    printf("\nSinifin Ortalamasi: %.2f\n", toplamOrtalama / (float)ogrenciSayisi); 
}

int main() {
    struct OGRENCI *baslangic = NULL;

    char secim = 'e';
    while (secim != 'h') {
        printf("Yeni Ogrenci Ekle? (e/h): ");
        scanf(" %c", &secim);

        if (secim == 'e') {
            OgrEkle(&baslangic);
        }
    }

    OrtalamalariHesapla(baslangic);

    return 0;
}

