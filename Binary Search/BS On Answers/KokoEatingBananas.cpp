//Return Minimum integer such that koko can eat all bananas in "h" hours
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int h;
    cin>>h;
    int low = 1;
    int high = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(high<arr[i])
        {
            high = arr[i];
        }
    }
    int ans = high;
    while(low<=high)
    {
        int mid = (high+low)/2;
        int t_hours = 0 ;
        for(int i=0;i<n;i++)
        {
            t_hours += ceil((double)arr[i]/mid);
        }
        if(t_hours <= h)
        {
            ans = mid ;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans;
    return 0;
}