
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
   int data;
   struct node *next;
};

void Terscevir(struct node **head_ref);
void printList(struct node *node);

int main() {
   struct node *head = NULL;
   int input;

   srand(time(NULL));
   int n = rand() % 10 + 1; // 1 ile 10 arasýnda rastgele bir sayý belirler
   for(int i = 0; i < n; i++) {
      input = rand() % 100; // 0 ile 99 arasýnda rastgele bir sayý belirler
      struct node* new_node = (struct node*)malloc(sizeof(struct node));
      new_node->data = input;
      new_node->next = head;
      head = new_node;
   }

   printf("\nOrijinal liste:\n");
   printList(head);

   Terscevir(&head);

   printf("\nTers cevrilmis liste:\n");
   printList(head);

   return 0;
}

void Terscevir(struct node **head_ref) {
   struct node *prev = NULL;
   struct node *current = *head_ref;
   struct node *next = NULL;

   while(current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
   *head_ref = prev;
}

void printList(struct node *node) {
   while(node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
}

