void deleteNode(struct node **head_ref, int key) {
    struct node* temp = *head_ref, *prev;

    // Baþ düðüm silinecekse
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Aradýðýmýz düðümü bulana kadar ilerleyelim
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Eðer girilen sayý mevcutsa düðümü sil
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    // Eðer girilen sayý mevcut deðilse kullanýcýya hata mesajý göster
    else {
        printf("%d Listede bulunamadý.\n", key);
    }
}

int main() {
    struct node *head = NULL;
    struct node *temp, *current;

    int num;
    char choice;

    // Baðlý listemizi oluþturuyoruz
    do {
        printf("Bir sayý girin: ");
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

    // Kullanýcýdan silinecek sayý girdisi alýyoruz
    printf("Silmek istediðiniz sayýyý girin:");
    scanf("%d", &num);

    // Girilen sayýyý baðlý listede arayarak silme iþlemini gerçekleþtiriyoruz
    deleteNode(&head, num);

    // Silme iþlemi sonrasý güncel baðlý listeyi yazdýrýyoruz
    printf("\nGüncellenmiþ listeniz þöyle: ");

    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");

    return 0;
}

