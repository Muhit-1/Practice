//https://codeforces.com/contest/405/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> value(t);

    for (int i =0; i<t; i++)
    {
        cin>>value[i];
    }

    sort(value.begin(), value.end());

    for(int num : value)
    {
        cout<<num <<" ";
    }

}
