#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int curCount = 0;
    int maxCount = 0;
    int lastEl = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==lastEl)
        {
            continue;
        }
        else if(arr[i]-1 != lastEl)
        {
            lastEl = arr[i];
            curCount = 1;
        }
        else
        {
            curCount++;
            maxCount = max(curCount , maxCount);
            lastEl = arr[i];
        }
    }
    cout<<maxCount<<endl;
    return 0;
    
}