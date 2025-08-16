#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxlen = 0 ;
    unordered_map<int,int> mpp;
    int sum = 0;
    for(int i=0;i<n;i++)
    {       
        sum = sum + arr[i];
        if(sum == 0)
        {
            maxlen = max(maxlen ,i+1);
        }
        else if(mpp.find(sum) != mpp.end())
        {
            maxlen = max(maxlen, i-mpp[-sum]);
        }
        mpp.insert({sum, i});
    }
    cout<<maxlen;

    
    
}