//https://lightoj.com/problem/hidden-secret
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

string tolow(string str)
{
    for(int i =0; i<str.size(); i++)
    {
        str[i]= tolower(str[i]);
    }
    return str;
}

string removespace(string str)
{
    string ret_str= " ";
    for(char ch : str)
    {

        if (ch != ' ')
        {
            ret_str += ch;
        }

    }
    return ret_str;
}

string sorted(string str )
{
    sort(str.begin(),str.end());
    return str;
}

string process(string str)
{
    str = tolow(str);
    str = removespace(str);
    str = sorted(str);

    return str;
}
int main()
{
    int t;
    cin >>t;
    cin.ignore();

for (int i =1; i<=t; i++)
{
  string a , b;
  getline(cin, a);
  getline(cin,b);
     cout<<"Case "<<i<<":";
  if (  process(a) == process(b))
  {
      cout<<" Yes"<<endl;
  }

  else cout<<"  No"<<endl;
}

}

