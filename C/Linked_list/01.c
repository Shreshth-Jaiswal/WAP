#include<stdio.h>

struct node{
    int value;
    struct node* next;
};

typedef struct node node_t;

/*
void printlist(node_t *head){
    node_t *temporary = head;

    while(temporary != NULL){
        printf("%d,", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}
*/
void printlist(node_t *head){
    if(head == NULL)
    return;
    printf("%d,",head->value);
    printlist(head->next);
}

int main(){
    node_t n1, n2, n3, yo;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;
    yo.value = 56;

// Linking them

    head = &n1;
    n1.next = &yo;
    n2.next = &yo;
    n3.next = NULL;     // So we know when to stop.
    yo.next = &n3;

    printlist(head);


    return 0;
}