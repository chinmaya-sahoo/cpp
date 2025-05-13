/*
1. Write a c program to implement a simple queue using an array.
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

int enqueue(int x) {
  if(rear >= MAX -1){
    printf("Overflow\n");
    return -1;
  }
  else{
    if (front == -1)
    {
      front = 0;
    }
    queue[++rear] = x;
    printf("%d is enqued to queue\n", x);
  }
}

int dequeue() {
  if(front == -1 || front > rear){
    printf("underflow\n");
    return -1;
  }
  else{
    int x = queue[front];
    front++;
    if(front > rear){
      front = -1;
      rear =  -1;
    }
    return x;
  }
}

int main() {
  enqueue(32);
  enqueue(38);
  printf("%d is dequeued from the queue \n",dequeue());
  printf("%d is dequeued from the queue \n",dequeue());
  return 0;
}