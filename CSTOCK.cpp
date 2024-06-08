#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double s,a,b,p;
        double c;
        cin>>s>>a>>b>>p;
        c=s+(s*(p/100));
        if(c>=a && c<=b)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"No"<<endl;


    }

}

