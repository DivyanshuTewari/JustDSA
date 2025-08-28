/*Given an integer array arr and an integer k, split arr into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.*/

#include<bits/stdc++.h>
using namespace std;
int count_Subarray(int mid,vector<int> arr)
{
    int subarray_Count = 1;
    int subarray_Sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(subarray_Sum + arr[i] <= mid)
        {
            subarray_Sum += arr[i];
        } 
        else{
            subarray_Count++;
            subarray_Sum = arr[i];
        }
    }
    return subarray_Count;
}
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int low = INT_MIN;
    int high = 0;
    for(int i=0;i<n;i++)
    {
        if(low<arr[i])
        {
            low = arr[i];
        }
        high = high + arr[i];
    }
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(count_Subarray(mid , arr) <= k )
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