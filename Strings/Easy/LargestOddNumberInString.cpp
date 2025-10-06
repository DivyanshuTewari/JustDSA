#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans = "";
    int firstIndex = 0;
    /*
    for(int i = 0 ; i<s.size();i++)
    {
        if(s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
        {
            ans.append(s.begin()+firstIndex , s.begin()+i+1);
            firstIndex = i+1;
            cout<<"{"<<ans<<"}"<<endl;
        }
    }
        
    */

    int n = s.size();
    for(int i = n - 1;i>=0;i++)
    {
        if(s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
        {
            ans = ans.append(s.begin() , s.begin() + i + 1);
            break;
        }
    }
    cout<<ans;
}