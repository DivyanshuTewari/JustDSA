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
    int low =0;
    int high = n-1;
    int mini = 0;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid]>arr[low])
        {
            if(arr[mini]>arr[low])
            {
                mini = low;
            }
            low = mid + 1;
        }
        else{
            if(arr[mini]>arr[mid])
            {
                mini = mid;
            }
            high = mid-1;
        }
    }
    cout<<mini;
}