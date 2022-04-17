#include <iostream>
#include <string>
using namespace std;
string encode(string s, int j)
{
int i;
for(i=j;i<s.length();i++)
{
s[i]=s[i]+2;
i+=j;
}
cout<<"\nEncoded String : ";
for(i=0;i<s.length();i++)
{
cout<<s[i];
}
cout<<s;
return s;

}
decode(string s, int j)
{
    int i;
    for(i=j;i<s.length();i++)
{
s[i]=s[i]-2;
i+=j;
}
cout<<"\ndecoded String : ";
for(i=0;i<s.length();i++)
{
cout<<s[i];
}
}
int main()
{
    //void
int j;
string s;
  cout<<"Sample String (s): ";
  getline(cin,s);
  cout<<"Sample Integer (j): ";
  cin>>j;
 encode(s,j);
 cout<<endl<<s;
 decode(s,j);
return 0;
}
