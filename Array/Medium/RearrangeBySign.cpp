#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Approach 1 -- Brute Force (TC - O(n) + O(n) , SC - O(n))
    /*
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            positive.push_back(arr[i]);
        }
        else{
            negative.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            arr[i]=positive[i/2];
            
        }
        else{
            arr[i]=negative[(i-1)/2];
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"     ";
    }

    */

    //Approach 2 TC-O(n) , SC - O(n) -->
    /*
    vector<int> support(n);
    int pos = 0;
    int neg = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            support[pos]=arr[i];
            pos=pos+2;
        }
        else
        {
            support[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<support[i]<<"     ";
    }

    */  
    return 0;

}