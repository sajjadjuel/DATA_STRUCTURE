#include <iostream>
using namespace std;
struct student
{
    string id;
    int cr;
    float cg;
};
int main()
{
   student arr[10];
   for(int i=0;i<10;i++)
   {
       cout<<"Enter Students Details "<<(i+1)<<endl;
       cout<<"ID: ";
       cin>>arr[i].id;
       cout<<"Credit: ";
       cin>>arr[i].cr;
       cout<<"CGPA: ";
       cin>>arr[i].cg;

   }
   cout<<"\n\nThe Student's ID whose CGPA is more than 3.75 : ";
   for(int i=0;i<10;i++)
   {
       if(arr[i].cg>3.75)
        cout<<arr[i].id<<"; ";

   }
   cout<<"\n\nThe Student's ID who has completed more than 50 credits : ";
   for(int i=0;i<10;i++)
   {
       if(arr[i].cr>50)
        cout<<arr[i].id<<"; ";

   }
cout<<endl;
}
