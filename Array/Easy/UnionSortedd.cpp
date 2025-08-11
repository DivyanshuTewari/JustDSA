#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    /*
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> un;
    for(auto it : s)
    {
        un.push_back(it);
    }
    for(int i=0;i<un.size();i++)
    {
        cout<<un[i]<<"      ";
    }
    */

    // Approach 2
    vector<int>un;
    int i = 0;
    int j = 0;
    
    while(i<n && j<m)
    {

        if(arr1[i] <= arr2[j])
        {
            if(un.size()==0  || arr1[i] != un.back())
            {

                un.push_back(arr1[i]);

            }
            i++;
        }
        if(arr2[j] < arr1[i])
        {
            if(un.size()==0 || arr2[j] != un.back())
            {
                un.push_back(arr2[j]);
            }
            j++;
        }


    }
    while(i<n)
    {
        if(arr1[i] != un.back())
        {

            un.push_back(arr1[i]);

        }
        i++;

    }
    while(j<m)
    {
        if(arr2[j] != un.back())
        {
            un.push_back(arr2[j]);
        }
        j++;

    }

    for(int k=0;k<un.size();k++)
    {
        cout<<un[k]<<"      ";
    }
    return 0;
}