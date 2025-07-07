//WAP to demonstrate various operations (create,enqueue,dequeue,overflow,underflow,display) of queue using array implementation
#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the queue

// Queue structure
struct Queue {
    int arr[MAX];
    int front;
    int rear;
};

// Function to initialize the queue
void initialize(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    return (q->rear == MAX - 1);  // Returns 1 if full, 0 otherwise
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    return (q->front == -1);  // Returns 1 if empty, 0 otherwise
}

// Enqueue operation (insert an element)
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (q->front == -1)  // If queue is empty
            q->front = 0;
        q->rear++;
        q->arr[q->rear] = value;
        printf("Enqueued %d to the queue.\n", value);
    }
}

// Dequeue operation (remove an element)
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;  // Return -1 to indicate underflow
    } else {
        int dequeuedValue = q->arr[q->front];
        if (q->front == q->rear) {
            q->front = q->rear = -1;
        } else {
            q->front++;
        }
        return dequeuedValue;
    }
}
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Nothing to display.\n");
    } else {
        printf("Queue contents: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}
int main() {
    struct Queue q;
    initialize(&q); 
    display(&q);  
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60); 
    display(&q);  
    printf("Dequeued: %d\n", dequeue(&q)); 
    display(&q); 
    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    return 0;
}
