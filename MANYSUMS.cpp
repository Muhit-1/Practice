//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MANYSUMS?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if (a==b)
        {
            cout<<"1"<<endl;
        }
        else cout<<(2*b)-(2*a)+1<<endl;

    }
}

