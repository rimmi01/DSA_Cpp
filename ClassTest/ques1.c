// 4
// 11, 13, 21, 3         11 --> 13, 13 --> 21, 21 --> -1 

// 4
// 4, 5, 2, 25           4 --> 5, 5 --> 25, 2 --> 25 

// we vhave to input an integer for the number of elements in the array, and then have to input an array , then in output we have to 

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

struct stack{
    int top;
    int arr[MAX];
};

void initStack(struct stack* stack){
    stack -> top = -1;
}

int isEmpty(struct stack* stack){
    return stack -> top == -1;
}

int isFull(struct stack* stack){
    return stack -> top == MAX -1;
}

void push(struct stack* stack, int value){
    if(isFull(stack)){
        printf("Cannot insert a new element as stack is full");
        return;
    }
    printf("Element is inserted in the stack %d\n ", value);
    stack -> arr[++stack -> top] = value;
}

int pop(struct stack* stack){
    if(isEmpty(stack)){
        printf("Cannot delete any element as stack is empty");
        return -1;
    }
    return stack -> arr[stack -> top--];
}


int peek(struct stack* stack){
    if(isEmpty(stack)){
        printf("Cannot display the top element as stack is empty");
        return -1;
    }
    return stack -> arr[stack -> top];
}




int main(){
    struct stack stack;
    initStack(&stack);
    push(&stack, 11);
    push(&stack, 13);
    push(&stack, 21);
    push(&stack, 3);
    printf("Element deleted is %d\n ", pop(&stack));
    printf("Top element is: %d\n", peek(&stack));
    return 0;
}

