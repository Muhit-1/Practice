//https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin>>input;

    int count_upper =0, count_lower= 0;

    for (char ch : input)
    {
        if (isupper(ch))
        {
            count_upper++;
        }
        else if(islower(ch))
        {
            count_lower++;
        }
    }

    if (count_lower >= count_upper)
    {
        for (char &ch : input)
        {
            ch = tolower(ch);
        }
    }
    else
    {
        for (char &ch : input)
        {
            ch = toupper(ch);
        }
    }

    cout<<input<<endl;

    return 0;

}
