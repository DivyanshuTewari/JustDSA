#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>> n;
    vector<int> arr(n);
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    bool x = true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            x = false;
            break;
        }
    }
    if(x)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    return 0;
}