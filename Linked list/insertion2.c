 //Insert a Node at the end of the linked list....
 #include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void linkedlisttraversal(struct Node *ptr){
while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * insertAtfirst(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
  struct Node * insertAtEnd(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct node * p =  head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next=ptr;
    ptr->next = NULL;
    return head;

  }
  struct Node * insertAtIndex(struct Node *head,int data,int index){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node *p = head;
      int i = 0;
      while(i!=index-1){
        p  = p->next;
        i++;
      }
      ptr->data = data;
      ptr->next = p->next;
      p->next = ptr;
  }
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

 second->data = 11;
  second->next = third;

 third->data = 44;
  third->next = fourth;

  fourth->data = 65;
  fourth->next = NULL;
  
  printf( "linked list before insertion\n");
  linkedlisttraversal(head);
   head = insertAtEnd(head,5);
  printf("\nlinked list after insertion\n");
  linkedlisttraversal(head);

  return 0;
}
