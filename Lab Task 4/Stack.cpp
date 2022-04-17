#include <iostream>
using namespace std;
int stack[5], n = 5, toa = -1;
void push(int a) {
   if(toa >= n-1)
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      toa++;
      stack[toa] = a;
      cout<<"The pushed element is : "<<stack[toa]<<endl;
   }
}

void pop() {
   if(toa <= -1)
      cout<<"\nStack Underflow\n"<<endl;
   else {
      cout<<"The popped element is "<< stack[toa] <<endl;
      toa--;
   }
}

void display() {
   if(toa>= 0) {
      cout<<"Stack elements are:";
      for(int i = toa; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}
int main() {
   int  a;

   pop();
            push(5);
            push(3);
            push(2);
            push(1);
            push(9);
            push(7);

            pop();
            pop();
            display();

            cout<<endl<<"Value of index 4 is : "<<stack[4]<<endl;


   return 0;
}
