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
    int target;
    cin>>target;
    int count = 0 ;
    //Brute Force 
    /*
    for(int i=0;i<n;i++)
    {
        int x_or = 0;
        for(int j=i;j<n;j++)
        {
            x_or = x_or^arr[j];
            if(x_or == target)
            {
                count++;
            }
            
        }
    }
    */
   //Optimized Approach
   int x_or = 0;
   unordered_map <int,int> mpp;
   for(int i=0;i<n;i++)
   {
    x_or = x_or^arr[i];
    if(x_or==target)
    {
        count++;
    }
    else if(mpp.find(x_or^target) != mpp.end())
    {
        count+=mpp[x_or^target];
    }
    mpp[x_or]++;

   }
   


    cout<<count;

    return 0;
}