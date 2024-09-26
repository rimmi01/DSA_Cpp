#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct Queue {
    int front;
    int rear;
    int arr[MAX];
};

void initQueue(struct Queue* Queue){
    Queue -> front = -1;
    Queue -> rear = -1;
}

int isFull(struct Queue* Queue){
    return Queue -> rear == MAX -1;
}

int isEmpty(struct Queue* Queue){
    return Queue -> front = -1;
}

void Enqueue(struct Queue* Queue, int value){
    if(isFull(Queue)){
        printf("Cannot insert value as overflow");
        return;
    }
    if(Queue -> front == -1){
        Queue -> front = 0;
    }
    printf("The value inserted is %d\n", value);
    Queue -> arr[++Queue -> rear] = value;
}

int Dequeue(struct Queue* Queue){
    if(isEmpty(Queue)){
        printf("Cannott delete any emement as queue is empty");
        return -1;
    }
    if(Queue -> front == Queue -> rear){
        Queue -> front = Queue -> rear =-1;
    }
    return Queue -> arr[Queue -> front ++];
}




int main(){
    struct Queue Queue;
    initQueue(&Queue);
    Enqueue(&Queue, 10);
    Enqueue(&Queue, 20);
    Enqueue(&Queue, 30);
    Enqueue(&Queue, 40);

    printf("%d", Queue.front);
    printf("%d", Queue.rear);

    return 0;
}