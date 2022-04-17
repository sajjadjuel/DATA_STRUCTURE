#include <bits/stdc++.h>
#include<iostream>

using namespace std;

struct Queue {
   int front, rear, capacity;
   int* queue;
   Queue(int c)
   {
       front = rear = 0;
       capacity = c;
       queue = new int;
   }

   ~Queue() { delete[] queue; }


   void queueEnqueue(int data)
   {

       if (capacity == rear) {
           printf("\nQueue is full\n");

       }


       else {
           queue[rear] = data;
           rear++;
       }

   }


   void queueDequeue()
   {

       if (front == rear) {
           printf("\nQueue is  empty\n");


       }


       else {
           for (int i = 0; i < rear - 1; i++) {
               queue[i] = queue[i + 1];
           }


           rear--;
       }

   }


   void queueDisplay()
   {
       int i;
       if (front == rear) {
           printf("\nQueue is Empty\n");

       }


       for (i = front; i < rear; i++) {
           printf(" %d <-- ", queue[i]);
       }

   }


   void queueFront()
   {
       if (front == rear) {
           printf("\nQueue is Empty\n");

       }
       printf(" %d", queue[front]);
       return;
   }
};
