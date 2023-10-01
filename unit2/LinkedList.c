#include <stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *next;
};

void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {

    struct node *start;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    printf("Enter the linked list value: ");
    scanf("%d",&one->value);
    scanf("%d",&two->value);
    scanf("%d",&three->value);
    scanf("%d",&four->value);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    start = one;
   
    printLinkedlist(start);
    printf("\n");

    //insert at beginning
    struct node *new_node=malloc(sizeof(struct node));
    printf("Enter the value of new node ");
    scanf("%d",&new_node->value);
    new_node->next=start;
    start=new_node;
    printf("After insertion at beginning\n");
    printLinkedlist(start);
    printf("\n");

    //insert at end
    new_node=malloc(sizeof(struct node));
    printf("Enter the value of new node ");
    scanf("%d",&new_node->value);
    struct node *ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->next=NULL;
    printf("After insertion at end\n");
    printLinkedlist(start);
    printf("\n");

    //insert after a given node
    new_node=malloc(sizeof(struct node));
    printf("Enter the value after which you want to add");
    int num;
    scanf("%d",&num);
    printf("Enter the value of new node ");
    scanf("%d",&new_node->value);
    ptr=start;
    struct node *preptr=start;
    while(preptr->value!= num){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    printf("After insertion after a element \n");
    printLinkedlist(start);
    printf("\n");
    
    //delete node in beginning
    ptr=start;
    start=start->next;
    free(ptr);
    printf("After deletion at start\n");
    printLinkedlist(start);
    printf("\n");
    
    //delete from end
    ptr=start;
    preptr=start;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    printf("After deletion at end\n");
    printLinkedlist(start);
    printf("\n");

    return 0;

}