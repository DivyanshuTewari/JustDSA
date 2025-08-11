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
    
    //Approach 1
    /*
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(n/2))
        {
            cout<<"Majority Element : "<<arr[i];
            break;
        }
    }
    */

    //Approach 2 O(n logn )+ O(n)-->
    /* 
    map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second > (n/2))
        {
            cout<<it.first;
        }
    }
    */ 

    //Approach 3 (Applying Moov's algo)-->
    int count = 0;
    int init = arr[0];
    for(int i = 0 ;i<n;i++)
    {
        if(init == arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            init = arr[i+1];
        }
    }
    cout<<"Majority Element : "<<init;


    return 0;

}