//https://codeforces.com/contest/231/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    for(int i=1; i<=n; i ++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int t = a+b+c;
        if (t== 2 || t == 3)
        {
            x++;
        }
    }
    cout<<x;

}
