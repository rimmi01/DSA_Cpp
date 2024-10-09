#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* newNode(int data, int priority) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

int isEmpty(struct Node* head) {
    return head == NULL;
}

void Enqueue(struct Node** head, int data, int priority) {
    struct Node* temp = newNode(data, priority);
    if (*head == NULL || (*head)->priority < priority) {
        temp->next = *head;
        *head = temp;
    } else {
        struct Node* start = *head;
        while (start->next != NULL && start->next->priority >= priority) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

int dequeue(struct Node** head) {
    if (isEmpty(*head)) {
        printf("Priority Queue is empty\n");
        return -1;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    int data = temp->data;
    free(temp);
    return data;
}

int peek(struct Node* head) {
    if (isEmpty(head)) {
        printf("Priority Queue is empty\n");
        return -1;
    }
    return head->data;
}

void display(struct Node* head) {
    if (isEmpty(head)) {
        printf("Priority Queue is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("Data: %d, Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main() {
    struct Node* pq = NULL;

    Enqueue(&pq, 10, 2);
    Enqueue(&pq, 20, 5);
    Enqueue(&pq, 30, 1);
    Enqueue(&pq, 40, 3);

    printf("Priority Queue:\n");
    display(pq);

    printf("Dequeued: %d\n", dequeue(&pq));
    printf("Dequeued: %d\n", dequeue(&pq));

    printf("Priority Queue after dequeuing:\n");
    display(pq);

    return 0;
}