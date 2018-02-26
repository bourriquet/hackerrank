#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
};

Node* insert(Node *head, int data) {
    struct Node *newNode = malloc(sizeof(Node));
    
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    } else {
        struct Node *node = head;
        
        while (node->next != NULL) {
            node = node->next;
        }
        node->next = newNode;
        
        return head;
    }
}

void display(Node *head) {
    Node *start = head;

    while(start) {
      printf("%d ", start->data);
      start = start->next;
    }
}

int main() {
    int T, data;
    scanf("%d", &T);
    Node *head=NULL;	
    
    while (T-->0) {
      scanf("%d", &data);
      head = insert(head, data);
    }

    display(head);
}
