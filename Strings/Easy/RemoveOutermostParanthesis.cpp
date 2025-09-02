#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans;
    int count  = 0;
    for (char x: s)
    {
        if(x == '(')
        {
            if(count != 0)
            {
                ans.push_back(x);
            }
            count++;
        }
        else if (x == ')')
        {
            count--;
            if(count != 0)
            {
                ans.push_back(x);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}