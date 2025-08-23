// Find Minimum space between between cows such that it is maximum
#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>arr , int cows , int dist)
{
    int curCow = 1 ;
    int last = arr[0];
    int n = arr.size();
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last >= dist)
        {
            curCow++;
            last = arr[i];
        }
        if(curCow == cows)
        {
            return true;
        }
    } 
    return false;

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
    int cows ;
    cin>>cows;
    sort(arr.begin(),arr.end());
    /*
    for(int i=1; i<=arr[n-1]-arr[0]; i++)
    {
        if(canWePlace(arr , cows , i)==true)
        {
            continue;
        }
        else
        {
            cout<<i-1;
            return 0;
        }
    }
    cout<<arr[n-1]-arr[0];
    */

    int low = 1;
    int high = arr[n-1]-arr[0];
    int ans = high;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(canWePlace(arr,cows,mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    cout<<ans ;
    return 0;
}