// thêm phần tử vào giữa và in ra danh sách
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
    
}Node;
Node *createnode(int val){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
void addgiuads(Node **head, int a, int b){
    Node *newnode = createnode(a);
    if(*head == NULL){
        *head = newnode;
        return;
    }
    Node *temp = *head;
    while(temp != NULL && temp->data != b){
        temp = temp->next;

    }
    if (temp != NULL)
    {
        newnode->next = temp->next;
        temp->next = newnode;

    }
    else{
        newnode->next = *head;
        *head = newnode;
    }

}
void inlist(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    
    
}
int main(){
    int n;
    scanf("%d", &n);
    Node *head = NULL;
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        addgiuads(&head, a, b);
    }
    inlist(head);
}
