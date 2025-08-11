#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
        
    }
    /* vector<int>arr2;
    arr2.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr2.push_back(arr[i]);
        }
    }
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<endl;
    } */

    // Approach 2 

    int i = 0 ;
    for(int j = 1 ; j<n ;j++)
    {
        if (arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    for(int x = 0 ; x < i+1 ;x++)
    {
        cout<<arr[x]<<endl;
    }
    return 0 ;
}