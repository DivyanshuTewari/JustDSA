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
    int k;
    cin>>k;
    int count = 0;
    vector<int>prefix_sum(n);
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i] = prefix_sum[i-1]+arr[i]; 
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        if(prefix_sum[i]==k)
        {
            count++;
            freq[prefix_sum[i]]++;
            
        }
        else if(freq.find(prefix_sum[i]-k) != freq.end())
        {
            count+=freq[prefix_sum[i]-k];
            freq[prefix_sum[i]]++;
            
        }
        else{
            freq[prefix_sum[i]]++;
            
        }
    }
    cout<<count;
}