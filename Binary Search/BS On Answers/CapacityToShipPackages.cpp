/*
You are given an array weights where weights[i] represents the weight of the i-th package on a conveyor belt. All the packages must be shipped in the order given from one port to another within days days.
Each day, the ship can carry a contiguous sequence of packages, as long as the total weight does not exceed its maximum capacity.
Your task is to find the minimum possible capacity of the ship so that all packages can be shipped within the given number of days.
*/
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
    int day ;
    cin>>day;
    int low = INT_MIN;
    int high = 0;
    for(int i=0;i<n;i++)
    {
        if(low<arr[i])
        {
            low = arr[i];
        }
        high += arr[i];
    }
    int ans = high;
    while(low<=high)
    {
        int mid = (low+high)/2;
        int mid_days = 1;
        int cur_capacity = 0;
        for(int i = 0;i<n;i++)
        {
            if(cur_capacity+arr[i]>mid)
            {
                mid_days++;
                cur_capacity = 0;
            }
            cur_capacity+=arr[i];
        }
        if(mid_days<=day)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;

}
