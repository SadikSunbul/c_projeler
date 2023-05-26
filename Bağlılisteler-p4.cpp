
#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *prev;
   struct node *next;
};

void insertAtEnd(struct node **head_ref, int new_data);
void printList(struct node *node);

int main() {
   struct node *head = NULL;
   int input;

   printf("Lutfen sayilari girin (Programi sonlandirmak icin -1'e basiniz):\n");

   while(1) {
      scanf("%d", &input);

      if(input == -1)
         break;

      insertAtEnd(&head, input);
   }

   printf("\nGirilen sayilar:\n");
   printList(head);

   return 0;
}

void insertAtEnd(struct node **head_ref, int new_data) {
   struct node* new_node = (struct node*)malloc(sizeof(struct node));
   struct node *last = *head_ref;

   new_node->data = new_data;
   new_node->next = NULL;

   if(*head_ref == NULL) {
      new_node->prev = NULL;
      *head_ref = new_node;
      return;
   }

   while(last->next != NULL)
      last = last->next;

   last->next = new_node;
   new_node->prev = last;

   return;
}

void printList(struct node *node) {
   while(node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
}

