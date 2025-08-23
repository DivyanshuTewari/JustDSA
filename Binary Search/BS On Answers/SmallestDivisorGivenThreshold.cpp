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
    int threshold;
    cin>>threshold;
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
        int mid = (low+high)/2;
        int mid_threshold = 0;
        for(int i=0;i<n;i++)
        {
            mid_threshold += ceil((double)arr[i]/mid);
        }
        if(mid_threshold<=threshold)
        {
            ans = mid;
            high = mid -1;

        }
        else{
            low = mid +1;
        }
    }
    cout<<ans;
}