#include<iostream>
using namespace std;
int main()
{
  int l;
  string s;
  cin >>l;
  while (l--){
    cin>>s;
    if (s.length()>10){
      cout<<s[0]<<s.length() - 2 << s[s.length()-1]<<endl;
    }
    else {
      cout<<s<<endl;

          }
    }
    return 0;
  }
