#include <iostream>

using namespace std;

string encode(string s, int j){
    int i;
    for(i = j; i<s.size(); i+=j+1) {
        if (s[i]!=' ')
        {
              s[i]=s[i]+3;
        }


    }

    return s;
}

string decode(string s, int j){
    int i;

    for(i=j;i<encode(s,j).size();i += j+1) {
             if (s[i]!=' ')
        s[i]=encode(s,j)[i]-3;
    }
    return s;
}


int main(){
    int j;
    cin>>j;
    string s="I am a student";
    cout<<"Sample String: "<<s<<endl<<"Sample Integer: "<<j<<endl;
    cout<<"Converted String :";
    cout<<encode(s,j);
    cout<<endl;

    cout<<"Decode String :";
    cout<<decode(s,j);
    return 0;
}
