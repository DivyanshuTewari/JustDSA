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
    int target ;
    cin>>target;
    vector<int>res(2,-1);
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid] == target)
        {
            res[0] = mid;
            high = mid -1; 
        }
        else if(arr[mid] > target)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    low = 0;
    high = n-1;
    while(low<= high )
    {
        int mid = (high+low)/2;
        if(arr[mid]==target)
        {
            res[1]=mid;
            low = mid+1;
        }
        else if(arr[mid]>target)
        {
            high = mid -1;

        }
        else
        {
            low = mid+1;
        }
    }
    cout<<res[0]<<"     "<<res[1];
    return 0;
}