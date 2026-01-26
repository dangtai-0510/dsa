// Thêm phần tử vào giữa danh sách liên kết đơn
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    long long data;
    struct Node* next;
} Node;

Node* createNode(long long x) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = x;
    p->next = NULL;
    return p;
}

Node* addAtAnywhere(Node* head, long long a, long long b) {
    Node* newNode = createNode(a);

    if (head == NULL) {
        return newNode;
    }

    Node* tmp = head;
    while (tmp != NULL && tmp->data != b) {
        tmp = tmp->next;
    }

    if (tmp != NULL) {
        newNode->next = tmp->next;
        tmp->next = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }

    return head;
}

int main() {
    int n;
    scanf("%d", &n);

    Node* head = NULL;
    long long a, b;

    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a, &b);
        head = addAtAnywhere(head, a, b);
    }

    Node* cur = head;
    while (cur != NULL) {
        printf("%lld ", cur->data);
        cur = cur->next;
    }

    return 0;
}
