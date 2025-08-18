//Floor --> Larget no. <= target in a sorted array
//Ceil --> Smallest no. >=target in a sorted array
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
    int ans =  -1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<=target)
        {
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"Floor -->"<<ans<<endl;
    cout<<"Ceil -->"<<arr[lower_bound(arr.begin(),arr.end(),target)-arr.begin()];

    

}