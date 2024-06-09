//PrepareTutorials30 Days of CodeDay 6: Let's Review
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,f;
        vector<char>odd,even;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(i%2==0)
            {
                even.push_back(s[i]);
            }
            else odd.push_back (s[i]);
        }

        for (char c : even)
        {
            cout<<c;
        }
        cout<<" ";
        for (char c : odd)
        {
            cout<<c;
        }
        cout<<endl;
    }

}
