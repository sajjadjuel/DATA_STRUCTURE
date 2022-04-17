#include <iostream>
using namespace std;
int n = 5, f = - 1, r = - 1;
string queue[10];


class Candidate
{
    public:
    string Name;
    string RegDate;
    int Age;
    string Type;
    Candidate()
    {
    cout<<"Enter Name :";
    cin>>Name;
    cout<<"Enter Age: ";
    cin>>Age;
    cout<<"Enter Reg Date: ";
    cin>>RegDate;
    cout<<"Enter Type: ";
    cin>>Type;
    }




    void enqueue(string a) {
   if(r >= n-1)
      cout<<"\nQueue Overflow\n"<<endl;
   else {
        f=0;
      r++;
      queue[r] = a;
      cout<<"Registered for Vaccinatio : "<<queue[r]<<endl;
   }
}
void dequeue() {
   if (f == - 1 || f > r) {
      cout<<"Queue Underflow ";
      return ;
   }
   else if (f == r || f ==-1) {
    cout<<" Vaccinated From Registered is : "<< queue[f] <<endl;
      f=r=-1;
      return ;
   }

   else {
      cout<<" Vaccinated From Registered is : "<< queue[f] <<endl;
      f++;
   }
}
void Display() {
   if (f == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Registered People are : ";
      for (int i = f; i <= r; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}




};

int main() {
    int a;
    int arr[10]={};
    Candidate c[3];

    for(int q=1;q<=10;q++)
  {
      string p=c[q].Name;
      c[q].enqueue(p);

  }
  for(int p=1;p<=10;p++)
  {
      if(c[p].Age>=40)
      c[p].dequeue();
      else if(c[p].Type=="Teacher")
      c[p].dequeue();
      else
        c[p].dequeue();

  }
   return 0;
}

