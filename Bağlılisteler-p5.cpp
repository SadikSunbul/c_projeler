#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *prev;
   struct node *next;
};

void insert(struct node **head_ref, int new_data);
void printList(struct node *node);

int main() {
   struct node *head = NULL;
   int input;

   printf("Lutfen sayilari girin (Programi sonlandirmak icin -1'e basiniz):\n");

   while(1) {
      scanf("%d", &input);

      if(input == -1)
         break;

      insert(&head, input);
   }

   printf("\nGirilen sayilar sirali olarak:\n");
   printList(head);

   return 0;
}

void insert(struct node **head_ref, int new_data) {
   struct node* new_node = (struct node*)malloc(sizeof(struct node));
   struct node *current;

   new_node->data = new_data;

   if(*head_ref == NULL || (*head_ref)->data >= new_node->data) {
      new_node->next = *head_ref;
      new_node->prev = NULL;
      if(*head_ref != NULL)
         (*head_ref)->prev = new_node;
      *head_ref = new_node;
   }
   else {
      current = *head_ref;

      while(current->next != NULL && current->next->data < new_node->data)
         current = current->next;

      new_node->next = current->next;

      if(current->next != NULL)
         current->next->prev = new_node;

      current->next = new_node;
      new_node->prev = current;
   }
}

void printList(struct node *node) {
   while(node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
}
