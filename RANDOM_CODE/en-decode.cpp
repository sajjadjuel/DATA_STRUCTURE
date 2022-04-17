#include<iostream>
#include<string>
using namespace std;

string encode(string s, int k)
{
    int n = s.length();
    for (int i=k; i<n; i=i+k+1)
       {
           s[i]=s[i]+2;

       }
        for(int i=0;i<n;i++)
{
cout<<s[i];
}
cout<<endl;

for (int i=k; i<n; i=i+k+1)
{
       s[i]=s[i]-2;
}
       for(int i=0;i<n;i++)
{
cout<<s[i];
}

}


/*string decode(string s, int k)
{
    int n = s.length();
    for (int i=k; i<n; i=i+k+1)
       s[i]=s[i]-2;
        return s;

}*/
int main()
{
    while(1)
    {
        string str;
        cout<<"Sample string (s):";
        getline(cin,str);
        int j;
        cout<<"Sample Integer(j):";
        cin>>j;
        encode(str,j);
        cout<<"\n \n";
        cin.get();

    }
    return 0;
}
