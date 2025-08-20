#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //1 1 2 3 3 4 4 5 5 odd - even (left part contain single element)
    //0 1 2 3 4 5 6 7 8 
    //1 1 2 2 3 3 4 5 5 even - odd (right site contain single element)

    if(n==1)
    {
        cout<<arr[0];
        return 0;
    }
    if(arr[0]!=arr[1])
    {
        cout<<arr[0];
        return 0;
    }
    if(arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1];
        return 0;
    }
    int low = 1;
    int high = n-2;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
        {
            cout<<arr[mid];
            break;
        }
        if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid]==arr[mid-1]))
        {
            low = mid+1;
        }
        else if((mid%2==1 && arr[mid]==arr[mid+1]) || (mid%2==0 && arr[mid]==arr[mid-1]))
        {
            high = mid-1;
        }

    }
    return 0;
}