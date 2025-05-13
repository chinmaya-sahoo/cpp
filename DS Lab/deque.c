#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
int is_full(){
    return front == (rear + 1) % MAX;
}

int is_empty(){
    return front == -1;
}

void enqueueFront(int x){
    if(is_full()){
        printf("Queue is full\n");
    }
    else if(is_empty()){
        front = 0;
        rear = 0;
        queue[front] = x;
        printf("%d is enqueued to the front of queue\n", x);
    }
    else{
        front = (front - 1 + MAX) % MAX;
        queue[front] = x;
        printf("%d is enqueued to the front of queue\n", x);
    }
    
    return;
}

void enqueueRear(int x){
    if(is_full()){
        printf("Queue is full\n");
    }
    else if(is_empty()){
        front = 0;
        rear = 0;
        queue[front] = x;
        printf("%d is enqueued to the rear of queue\n", x);
    }
    else{
        rear = (rear + 1) % MAX;
        queue[rear] = x;
        printf("%d is enqueued to the rear of queue\n", x);
    }
}


int dequeueFront(){
    if(is_empty()){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        int x = queue[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % MAX;
        }
        return x;
    }
}


int dequeueRear(){
    if(is_empty()){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        int x = queue[rear];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            rear = (rear - 1 + MAX) % MAX;
        }
        return x;
    }
}


void display(){
    if(is_empty()){
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    while(i!=rear){
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue[i]);
    return;
}

int main(){
    enqueueFront(5);
    enqueueRear(10);
    enqueueRear(15);
    printf("%d is dequeued from front\n", dequeueFront());
    printf("%d is dequeued from rear\n", dequeueRear());
    printf("the queue is : \n");
    display();
    return 0;
}