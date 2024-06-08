//PrepareTutorials30 Days of CodeDay 6: Let's Review
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int odd, even;
        string s;
        cin>>s;
        int l = s.length();
        for(int i=0; i<=l; i++)
        {
            if(i%2==0)
            {
                even=i;
                 cout<<even;
                     cout<<s.at(even);
                     break;
            }
            else
            {
                odd=i;
                //cout<<odd<<endl;
            }

            //   cout<<s;
            // cout<<s.at(odd)<<endl;

        }

    }

}
