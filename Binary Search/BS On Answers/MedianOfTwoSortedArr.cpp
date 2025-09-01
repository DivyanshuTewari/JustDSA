#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m ;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int count = 0;
    int i1 = (n+m)/2;
    int i2 = (n+m-1)/2;
    int numi1 , numi2;
    int i=0 , j =0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            
            if(count == i1)
            {
                numi1 = arr1[i];
            }
            if(count == i2)
            {
                numi2 = arr1[i];
            }
            i++;
        }
        else
        {
            
            if(count == i1)
            {
                numi1 = arr2[j];
            }
            if(count == i2)
            {
                numi2 = arr2[j];
            }
            j++;
        }
        count ++;
    }
    while(i<n)
    {
        
        if(count == i1)
        {
            numi1 = arr1[i];
        }
        if(count == i2)
        {
            numi2 = arr1[i];
        }
        i++;
        count++;

    }
    while(j<m)
    {
        
        
        if(count == i1)
        {
            numi1 = arr2[j];
        }
        if(count == i2)
        {
            numi2 = arr2[j];
        }
        j++;
        count++;
    }

    if((m+n)%2 == 1)
    {
        cout<<numi1;
        return 0;
    }
    cout<<(numi1+numi2)/2.0;
    return 0;

}