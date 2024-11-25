#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node* ptr) {
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node* top) {
    if(top == NULL) {
        return 1;
    }
    return 0;
}

int isFull(struct Node* top) {
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL) {
        return 1;
    }
    return 0;
}

struct Node *push(struct Node *top, int x) {
    if(isFull(top)) {
        printf("Stack Overflow😣\n");
    }
    else{
        struct Node* n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node ** top) {
    if(isEmpty(*top)) {
        printf("Stack Underflow😣\n");
    }
    else{
        struct Node * n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main() {
    struct Node *top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    LinkedListTraversal(top);
    int element = pop(&top);
    int element1 = pop(&top);
    int element2 = pop(&top);
    int element3 = pop(&top);

    printf("Popped element is %d\n", element);
    printf("Popped element is %d\n", element1);
    printf("Popped element is %d\n", element2);
    printf("Popped element is %d\n", element3);
    LinkedListTraversal(top);
    
    return 0;
}
