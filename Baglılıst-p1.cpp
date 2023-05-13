#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;  // Ba�lang��ta ba� d���m NULL olacak.
    struct node *temp, *current;

    int num;
    char choice;

    do {
        printf("Bir say� girin: ");
        scanf("%d", &num);

        temp = (struct node*)malloc(sizeof(struct node));  // Bellekte yeni bir d���m yarat�l�yor

        temp->data = num;  // D���m�n veri k�sm�na girilen say� atan�yor
        temp->next = NULL;  // D���m�n sonraki adresi NULL olarak ayarlan�yor

        if (head == NULL) {  // �lk d���m ise
            head = temp;  // Yeni olu�turulan d���m ba� d���m oluyor
            current = temp;  // current da bu d���me atan�yor
        }
        else {
            current->next = temp;  // Sonraki d���m olarak ekleniyor
            current = current->next;  // current g�ncelleniyor
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

