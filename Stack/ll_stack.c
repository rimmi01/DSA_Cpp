#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct stack{
    struct Node* top;
};

struct Node* createNode(int value){
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1 -> data = value;
    node1 -> next = NULL;
    return node1;
}

struct stack* createStack(){
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    stack -> top = NULL;
    return stack;
}

int isEmpty(struct stack* stack){
    return stack -> top ==NULL;
}

void push(struct stack* stack, int value){

    struct Node* node1 = createNode(value);
    node1-> next = stack -> top;
    stack -> top = node1;
    printf("Value inserted in the node is %d\n", value);
}

int pop(struct stack* stack){
    struct Node* temp = stack -> top;
    int popped = temp -> data;
    stack -> top = stack -> top -> next;
    free(temp);
    return popped;
}

int peek(struct stack* stack){
    if (!isEmpty(stack)){
        return stack->top->data;
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}

void display(struct stack* stack){
    struct Node* temp = stack->top;
    if (temp == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Data elements in the stack are: ");
        while (temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main(){
    struct stack* stack = createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);

    printf("The value popped from the stack is: %d\n", pop(stack));
    display(stack);

    printf("The peak element is the stack is: %d\n", peek(stack));
    return 0;
}

