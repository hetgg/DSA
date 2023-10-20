//Delete a node at nth position
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    /* data */
    int data;
    struct Node* next;
};
struct Node* head = NULL; //global variable
void Insert(int n){
    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));
    temp1->data = n;
    temp1->next = NULL;

    if (head == NULL){
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    while(temp2->next!= NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void Delete(n){
    struct Node* temp;
    
}

void Print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

int main(){
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    printf("Enter a position \n");
    scanf("%d", &n);
    Delete(n);
    Print();
}
