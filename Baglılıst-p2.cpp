void deleteNode(struct node **head_ref, int key) {
    struct node* temp = *head_ref, *prev;

    // Ba� d���m silinecekse
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Arad���m�z d���m� bulana kadar ilerleyelim
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // E�er girilen say� mevcutsa d���m� sil
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    // E�er girilen say� mevcut de�ilse kullan�c�ya hata mesaj� g�ster
    else {
        printf("%d Listede bulunamad�.\n", key);
    }
}

int main() {
    struct node *head = NULL;
    struct node *temp, *current;

    int num;
    char choice;

    // Ba�l� listemizi olu�turuyoruz
    do {
        printf("Bir say� girin: ");
        scanf("%d", &num);

        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            current = temp;
        }
        else {
            current->next = temp;
            current = current->next;
        }

        printf("\nDevam etmek istiyor musunuz? (e/H):");
        scanf(" %c", &choice);

    } while (choice == 'e' || choice == 'e');

    // Kullan�c�dan silinecek say� girdisi al�yoruz
    printf("Silmek istedi�iniz say�y� girin:");
    scanf("%d", &num);

    // Girilen say�y� ba�l� listede arayarak silme i�lemini ger�ekle�tiriyoruz
    deleteNode(&head, num);

    // Silme i�lemi sonras� g�ncel ba�l� listeyi yazd�r�yoruz
    printf("\nG�ncellenmi� listeniz ��yle: ");

    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");

    return 0;
}

