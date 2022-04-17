#include <iostream>
using namespace std;
int queue[5], n = 5, f = - 1, r = - 1;

void enqueue(int a) {
   if(r >= n-1)
      cout<<"\nQueue Overflow\n"<<endl;
   else {
        f=0;
      r++;
      queue[r] = a;
      cout<<"Stack inserted in queue is : "<<queue[r]<<endl;
   }
}
void dequeue() {
   if (f == - 1 || f > r) {
      cout<<"Queue Underflow ";
      return ;
   }
   else if (f == r || f ==-1) {
    cout<<"Element deleted from queue is : "<< queue[f] <<endl;
      f=r=-1;
      return ;
   }

   else {
      cout<<"Element deleted from queue is : "<< queue[f] <<endl;
      f++;
   }
}
void Display() {
   if (f == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = f; i <= r; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
    int a;
    int arr[5]={};
    cout<<arr;

          enqueue(4);
           enqueue(5);
           enqueue(7);
           enqueue(9);
           enqueue(8);
           enqueue(2);

         dequeue();
         dequeue();
        Display();
   return 0;
}
