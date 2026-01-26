// Thêm phần tử vào cuối danh sách liên kết đơn
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}


Node* addAtTail(Node* head, int val) {
    Node* newNode = createNode(val);

    if (head == NULL) {
        head = newNode;
    } else {
        Node* tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    return head;
}
int main() {
    int n, x;
    Node* head = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        head = addAtTail(head, x);
    }

    Node* p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}

