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
    int target;
    cin>>target;
    int ans = n;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=target)
        {
            ans = mid;
            high = mid -1;

        }
        else
        {
            low = mid+1;
        }
    }
    cout<<ans<<endl;
    //built in function
    int lb = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    cout<<lb;

}