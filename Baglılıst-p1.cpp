#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;  // Baþlangýçta baþ düðüm NULL olacak.
    struct node *temp, *current;

    int num;
    char choice;

    do {
        printf("Bir sayý girin: ");
        scanf("%d", &num);

        temp = (struct node*)malloc(sizeof(struct node));  // Bellekte yeni bir düðüm yaratýlýyor

        temp->data = num;  // Düðümün veri kýsmýna girilen sayý atanýyor
        temp->next = NULL;  // Düðümün sonraki adresi NULL olarak ayarlanýyor

        if (head == NULL) {  // Ýlk düðüm ise
            head = temp;  // Yeni oluþturulan düðüm baþ düðüm oluyor
            current = temp;  // current da bu düðüme atanýyor
        }
        else {
            current->next = temp;  // Sonraki düðüm olarak ekleniyor
            current = current->next;  // current güncelleniyor
        }

        printf("\nDevam etmek istiyor musunuz? (e/h): ");
        scanf(" %c", &choice);

    } while (choice == 'e' || choice == 'e');

    printf("\nListeniz:: ");

    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");
    // head --> [ data | next ] --> [ data | next ] --> [ data | next ] --> ... --> [ data | NULL ]


    return 0;
}

