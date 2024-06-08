//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/NFS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if (v*v >= (u*u-2*a*s))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
