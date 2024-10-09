#include <iostream>
#include <climits>
using namespace std;
#define MAX 100

struct PriorityQueue{
    int arr[MAX];
    int priority[MAX];
    int size;
};

void initQueue(PriorityQueue* pq){
    pq->size = 0;
}

int isEmpty(PriorityQueue* pq){
    return pq->size == 0;
}

int isFull(PriorityQueue* pq){
    return pq->size == MAX;
}

int Enqueue(PriorityQueue* pq, int value, int priority){
    if(isFull(pq)){
        cout << "The Priority Queue is full" << endl;
        return 0;
    }
    pq->arr[pq->size] = value;
    pq->priority[pq->size] = priority;
    pq->size++;
    return 1;
}

int getHighestPriority(PriorityQueue* pq){
    int maxPriority = INT_MIN;
    int index = -1;
    for(int i = 0; i < pq->size; i++){
        if(pq->priority[i] > maxPriority){
            maxPriority = pq->priority[i];
            index = i;
        }
    }
    return index;
}

int main(){
    PriorityQueue pq;
    initQueue(&pq);

    Enqueue(&pq, 10, 3);
    Enqueue(&pq, 20, 4);
    Enqueue(&pq, 30, 2);
    Enqueue(&pq, 40, 5);
    
    display(&pq);
    
}

