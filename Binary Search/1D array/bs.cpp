#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> arr,int low ,int high ,int target)
{
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if (arr[mid]>target)
    {
        return bs(arr,low,mid-1,target);
    }
    return bs(arr,mid+1,high,target);
}
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
    cin>> target;
    //Iterative 

    /*
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (high + low)/2;
        if (arr[mid] == target)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>target)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    */

    //Recursive approach 
    
    int ans = bs(arr,0,n-1,target);
    cout<<ans;
    return 0;
}