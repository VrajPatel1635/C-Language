#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1) {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    }
    return 0;
}

void push(struct stack * ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d in Stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack * ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from pop\n");
    }
    else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peak(struct stack *sp, int i) {
    int arrayInd = sp->top-i+1;
    if(arrayInd < 0) {
        printf("Stack position is not valid\n");
        return -1;
    }
    else {
        return sp->arr[arrayInd];
    }
}

int Stack_top(struct stack *sp) {
    return sp->arr[sp->top];
}

int Stack_Bottom(struct stack *sp) {
    return sp->arr[0];
}

int main() {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));     

    printf("Full : %d\n", isFull(sp));
    printf("Empty : %d\n", isEmpty(sp));

    push(sp, 65);
    push(sp, 64);

    for(int j = 1; j <= sp->top + 1; j++) {
        printf("The value at position %d is %d \n", j, peak(sp, j));
    }

    printf("The value of top is %d\n",Stack_top(sp));
    printf("The value of bottom is %d\n",Stack_Bottom(sp));
    
    return 0;
}