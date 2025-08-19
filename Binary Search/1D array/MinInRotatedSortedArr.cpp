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
    int low = 0;
    int high = n-1;
    int mini = INT_MAX;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid]>arr[low])
        {
            mini = min (mini , arr[low]);
            low = mid+1;
        }
        else{
            mini=min(mini,arr[mid]);
            high =mid-1;
        }
    }
    cout<<mini;
    return 0;
}