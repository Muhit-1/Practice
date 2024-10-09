//https://codeforces.com/contest/791/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  a,b,x,y;
    cin>>a>>b;
    for(int i=1; 1<10; i++)
    {
        x = a*3;
        y = b*2;

        if (x>y)
        {
            cout<<i;
            break;
        }
        else
        {
            a=x;
            b=y;
        }
    }

}
