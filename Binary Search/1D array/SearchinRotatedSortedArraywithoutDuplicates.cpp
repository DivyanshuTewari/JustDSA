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
    int target;
    cin>>target;
    int low  = 0;
    int high =n-1;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid]==target)
        {
            cout<<mid;
            break;
        }
        if(arr[mid]>=arr[low])
        {
            if(arr[mid]>target && arr[low]<=target)
            {
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(arr[mid]<target && arr[high]>=target )
            {
                low = high -1;
            }
            else{
                high = low-1;
            }

        }
    }
    return 0;
}