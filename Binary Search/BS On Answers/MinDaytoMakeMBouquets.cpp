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
    int m,k;
    cin>>m>>k;
    if(m*k > n)
    {
        cout<<"Not Possible";
        return 0;
    }
    int low = INT_MAX;
    int high = INT_MIN;
    int ans = high;
    for(int i=0;i<n;i++)
    {
        if(low>arr[i])
        {
            low = arr[i];
        }
        if(high<arr[i])
        {
            high = arr[i];
        }
    }
    while(low<=high)
    {
        int mid = (low+high)/2;
        int b_Count = 0;
        int f_Count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=mid)
            {
                f_Count++;
                if(f_Count == k)
                {
                    b_Count++;
                    f_Count = 0;
                }
            }
            else{
                f_Count = 0;
            }
        }
        if(b_Count>=m)
        {
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid +1;
        }

    }
    cout<<ans<<endl;
    return 0;
}