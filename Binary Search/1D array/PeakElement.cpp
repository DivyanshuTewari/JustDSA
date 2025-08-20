//Peak element is the largest element which is arr[i-1]<Peak Element>arr[i+1]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<arr[0];
        return 0;
    }
    if(arr[0]>arr[1])
    {
        ans = arr[0];
    }
    if(arr[n-1]>arr[n-2])
    {
        ans = max(ans,arr[n-1]);
    }
    int low = 1;
    int high = n-2;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans = max(ans,arr[mid]);
        }
        if(arr[mid+1]>arr[mid-1])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;

}