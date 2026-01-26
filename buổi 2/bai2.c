// Thêm phần tử vào đầu danh sách liên kết đơn
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data ;
    struct Node *next;
}Node;

Node *createNode(int val){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}


void addathead(Node **head , int val){
    Node *newNode = createNode(val);
    newNode-> next = *head;
    *head = newNode;
}

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
     printf("\n");
}

int main(){
    int n ;
    scanf("%d" , &n);
    Node *head = NULL;
    for (int i = 0 ; i< n ; i++){
        int x;
        scanf("%d" , &x);
        addathead(&head ,x);
    }
    printList(head);
    return 0;
}
