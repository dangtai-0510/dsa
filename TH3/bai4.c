#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node* createNode(int x) {
    Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    return p;
}

void addathead(Node **head, int x) {
    Node *newNode = createNode(x);

    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }
    else{
        Node *tmp = *head;
        while (tmp->next != *head) {
            tmp = tmp->next;
        }

        newNode->next = *head;
        tmp->next = newNode;
    }
    
}

void printds(Node *head) {
    if (head == NULL) return;

    Node *p = head;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node *head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        addathead(&head, x);
    }

    printds(head);
    return 0;
}
