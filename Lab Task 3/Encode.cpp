#include <iostream>
using namespace std;

string encode(string s, int j)
{
    string res=" ";

    for (int i=1;i<s.length();i=i+2)
    {
        int text = int(s[i]);

        //if (isupper(text[i]))
        //{
              if(text + j > 122){
            j -= (122-j);
            j = j % 26;
         res += char(96 + j);
            //res += char(int(text[i]+j-65)%26 +65);

        }


    else
       res += char(text + j);
        //res += char(int(text[i]+j-97)%26 +97);
    }

    return res;
}
int main()
{
  string s;
  int j;
  cout<<"Sample String (s): ";
  getline(cin,s);
//  cin.getline(s);
  cout<<"Sample Integer (j): ";
  cin>>j;
  cout<<"Converted String: "<<encode(s,j);
}
