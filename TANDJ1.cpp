//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TANDJ1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int dist = abs(a-c) + abs(b-d);
        int x=abs(k-dist);
        if (dist<=k && x%2==0)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }

    }

}
