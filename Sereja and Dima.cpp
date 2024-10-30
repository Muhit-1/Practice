//https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum_1 =0 , sum_2 = 0;
    cin>>n;
    vector<int>value(n);
    for(int i =0 ; i <n; i ++ )
    {
        cin>>value[i];
    }

     sort(value.begin(),value.end(),greater<int>());

    for(int i=0 ; i<n; i++)
    {
        if(i%2 == 0)
        {
            sum_1+=value[i];
        }
        else {
            sum_2 +=value[i];
        }
    }

    cout<<sum_1<<" "<<sum_2<<endl;
}
