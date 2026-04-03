// thêm phần tử vào đầu và in ra danh sách
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
Node *createNode(int val){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
void addhead(Node **head, int val){
    Node *newNode = createNode(val);
    newNode-> next = *head;
    *head = newNode;
}
void printlist(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Node *head = NULL;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        addhead(&head, x);
    }
    printlist(head);
}