#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

struct Node* createNode(int value){
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1 -> data = value;
    node1 -> next = NULL;
    return node1;
};

void initQueue(){
    struct Queue* Queue = (struct Queue*)malloc(sizeof(struct Queue));
    Queue -> front = NULL;
    Queue -> rear = NULL;
}

initEmpty(struct Queue* Queue){
    return Queue -> front = NULL;
}

void Enqueue(struct Queue* Queue, int value){
    struct Node* node1 = createNode(value);
    /// left pending 

}

