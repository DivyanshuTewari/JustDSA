#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];  
    }
    //Approach 1 -- TC - O(n^2)
    /*
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        bool leader = true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                leader = false;
                break;
            }
        }
        if(leader)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"     ";

    }
    */
    
    //Approach 2 -- >
    vector<int> ans;
    int max = INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"     ";

    }

    return 0;
}