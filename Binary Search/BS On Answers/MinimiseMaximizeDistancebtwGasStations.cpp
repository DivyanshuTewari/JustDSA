#include <bits/stdc++.h>
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


    /*Approach 1 --> O(n*k) + O(n)   
    vector<int> stationBtw (n-1,0);
    
    for(int gasS = 1 ; gasS<= k ;gasS++)
    {   
        long double maximumDist = -1 ,  maximumIndex = -1;    
        for(int i=0;i<n-1;i++)
        {
            int diff = arr[i+1]-arr[i];
            long double segmentSize = (long double)diff / (stationBtw[i]+1);
            if(maximumDist < segmentSize)
            {
                maximumDist = segmentSize;
                maximumIndex = i;
            }
        }
        stationBtw[maximumIndex]++;

    }
    long double maxi = INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if((long double)(arr[i+1]-arr[i])/(stationBtw[i]+1) > maxi)
        {
            maxi = (long double)(arr[i+1]-arr[i])/(stationBtw[i]+1);
        }
    }
    cout<<maxi;
    */

    //Approach 2 -- TC O(n) + O(k*log n) >
    vector<int> stationBtw (n-1,0);
    priority_queue<pair<long double , int>> pq;
    for(int i=0;i<n-1;i++)
    {
        pq.push({arr[i+1]-arr[i] , i});
    }
    for(int gasS = 1 ; gasS<=k; gasS++)
    {
        auto tp = pq.top();
        pq.pop();
        int index = tp.second;
        stationBtw[index]++;
        pq.push({(arr[index+1]-arr[index])/(long double)(stationBtw[index] + 1) , index}); 

         
        
    }
    cout<<pq.top().first;
    return 0; 

}