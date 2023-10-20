//Linekd list: Inserting a node at the beginning 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    /* data and link defined here*/
    int data;
    struct Node* next; 
}; 
struct Node* head; // Global variable
void Insert(int x){
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = x;  
    temp-> next = head; 
    head = temp; 
}
void Print(){
    struct Node* temp = head; 
    printf("List is: ");
    while(temp!=  NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    printf("Total Numbers?\n");
    int n;
    scanf("%d", &n);
    int i, x;
    for(i=0; i<n; i++){
        printf("Enter the Number: ");
        scanf("%d ", &x);
        Insert(x);
        Print();
    }

}

