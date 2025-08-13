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
    int k;
    cin>>k;
    /* int len = 0;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum =  sum + arr[j];
            len ++;
            if(sum == k)
            {
                if(len > max)
                {
                    max = len;
                    len = 0;
                    break;
                }
            }
        }
    }
    cout<<max;
    */

    // Approach 2  -->
    /*
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int sum = arr[0];
    while(right < n)
    {
        while(left <= right && sum > k)
        {
            sum = sum - arr[left];
            left ++;
        }
        if(sum == k)
        {
            maxLen = max(maxLen , right - left + 1);
        }
        right++;
        if(right < n )
        {
            sum = sum + arr[right];
        }
    }
    cout<<maxLen;
    */
    

    //Approach 3 --> Using Unordered Map
    unordered_map<int,int> mpp;
    vector<int>prefix_sum(n);
    int maxlen = 0;
    prefix_sum[0] = arr[0];
    if(prefix_sum[0] == k)
    {
        maxlen = 1;
    }
    mpp.insert({prefix_sum[0],0});
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
        if(prefix_sum[i]==k)
        {
            maxlen= max(maxlen ,i+1);
        }
        else if(mpp.find(prefix_sum[i]-k) != mpp.end())
        {
            maxlen=max(maxlen , i-mpp[prefix_sum[i]-k]);
        }
        mpp.insert({prefix_sum[i], i});
    }
    cout<<maxlen;
    
}