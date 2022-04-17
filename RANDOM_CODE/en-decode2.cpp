#include <iostream>
using namespace std;
void encode(string s, int j)
{
int i;
for(i=j;i<s.length();i++)
{
    if (s[i]!=' ')
    {
       s[i]=s[i]+2;
       i+=j;
    }

}
cout<<"Converted String : ";
for(i=0;i<s.length();i++)
{
cout<<s[i];
}
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
int j;
string s;
  cout<<"Sample String (s): ";
  getline(cin,s);
  cout<<"Sample Integer (j): ";
  cin>>j;
 encode(s,j);
return 0;
}
