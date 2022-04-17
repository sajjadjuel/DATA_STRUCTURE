#include <iostream>
#include<string>

using namespace std;
string encode(string S, int j)
{
int i;
for(i=j;i<S.length();i++)
{
if(S[i]!= ' ')
{S[i]=S[i]+j;
}
i+=j;
}

return S;

}

string decode(string S, int j)
{
int u;
S=encode(S,j);
for(u=j ;u<S.length();u++)
{
if(S[u]!= ' ' )
{
    S[u]=S[u]-j;

}
 u+=j;
}
for(u=0;u<S.length();u++)
{

{cout<<S[u];}
}

}


int main()
{
int j;
cin>>j;
string S="I am a student";
cout<<"Sample String: "<<S<<endl<<"Sample Integer: "<<j<<endl;
cout<<"Converted String :";
cout<<encode(S,j);
cout<<endl;

cout<<"Decode String :";
decode(S,j);
return 0;
}
