// thêm phần tử vào cuối và in ra danh sách
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next; 
    
}Node;
Node *createnode(int val){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode-> data = val;
    newnode->next = NULL;
    return newnode;
}
void addtail(Node **head, int val){
    Node *newnode = createnode(val);
    if(*head == NULL){
        *head = newnode;
    }
    else{
        Node *tmp = *head;
        while (tmp->next != NULL)
        {
            
            tmp = tmp->next;
        }
        
        tmp->next = newnode;
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
        int x;
        scanf("%d", &x);
        addtail(&head, x);
    }
    inlist(head);
}
