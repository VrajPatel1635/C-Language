#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r == q->f) {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r == q->size-1) {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val) {
    if(isFull(q)) {
        printf("This queue is Full");
    } else {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q) {
    int a = -1;
    if(isEmpty(q)) {
        printf("This queue is Empty");
    } else {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    struct queue q;
    q.size = 25;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

    enqueue(&q, 25);
    enqueue(&q, 92);

    printf("%d is deleted from Queue", dequeue(&q));

    for(int i = 0; i <= q.r; i++) {
        printf("%d\t",q.arr[i]);
    }
    
    return 0;
}