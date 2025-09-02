#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;    
    getline(cin,s);
    string ans = "";

    //Removing Extra Space 
    int n = s.size();
    int slow = 0;
    for(int fast = 0; fast<n; fast++)
    {
        if(s[fast] != ' ')
        {
            if(slow != 0)
            {
                s[slow]=' ';
                slow++;
            }
            while(fast < n && s[fast] != ' ')
            {
                s[slow] = s[fast];
                slow++;
                fast++;
            }
        }
    }
    s.resize(slow);

 
    
    reverse(s.begin(),s.end());

    n = s.size();
    int firstIndex = 0;
    for(int i=0 ; i<=n ;i++)
    {
        if(i==n || s[i] == ' ')
        {
            reverse(s.begin()+firstIndex  , s.begin()+i);
            firstIndex = i+1;
        }
    }
    
    cout<<"{"<<s<<"}";


    
}