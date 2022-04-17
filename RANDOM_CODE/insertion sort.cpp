#include<iostream>
using namespace std;
int main(){

  int i,j,s,temp,a[20];

  cout<<"Enter total elements: ";
  cin>>s;

  cout<<"Enter %d elements: "<<s;
  for(i=0;i<s;i++)
      cin>>a[i];

  for(i=1;i<s;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }

  cout<<"After sorting: ";
  for(i=0;i<s;i++)
      cout<<a[i];

  return 0;
}
