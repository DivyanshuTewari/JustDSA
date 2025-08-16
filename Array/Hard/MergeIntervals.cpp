#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(2));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    //Optimized approach to merge intervals
    // Sort the intervals based on the starting time
    // If the current interval starts after the last merged interval ends, add it to the result
    // Otherwise, merge the current interval with the last merged interval by updating the end time
    // Time Complexity: O(n log n) due to sorting, Space Complexity: O(n) for storing the result
    vector<vector<int>> res;
    int left = arr[0][0];
    int right = arr[0][1];
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n; i++)
    {
        if(arr[i][0]>=right)
        {
            res.push_back({left,right});
            left = arr[i][0];
            right = arr[i][1];
        }
        else
        {
            right = arr[i][1];
        }

    }
    res.push_back({left,right});
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }


}