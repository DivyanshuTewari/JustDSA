#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    /*
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == k)
            {
                cout<<arr[i]<<" + "<<arr[j]<<endl;
            }
        }
    }
    */

    //Approch 2 -->

    /*
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = n-1;
    while(left<right)
    {
        if(arr[left]+arr[right] == k)
        {
            cout<<arr[left]<<" + "<<arr[right];
            break;
        }
        else if(arr[left] + arr[right] > k)
        {
            right--;
        }
        else{
            left++;
        }

    }
    */
    map<int , int> mpp;
    for(int i = 0 ;i<n;i++)
    {
        int rem = k - arr[i];
        if(mpp.find(rem) != mpp.end())
        {
            cout<< arr[mpp[rem]] <<" + " << arr[i]<< endl;

        }
        mpp[arr[i]] = i;
    }    
    return 0;
}