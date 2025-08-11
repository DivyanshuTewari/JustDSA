#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Brute Force --> TC - O(n^2)
    /*
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int count =0;
        if(res.size()==0 || (res[0]!=arr[i] && res.size()==1))
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            if(count>n/3)
            {
                res.push_back(arr[i]);
            }
        }
    }
    cout<<res[0]<<"     "<<res[1];
    */

    //Optimized Approach --> TC - O(n)
    int count1 = 0 ;
    int count2 = 0 ;
    int element1 = INT_MIN;
    int element2 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(count1 == 0 && element2 != arr[i])
        {
            element1 = arr[i];
            count1++;
        }
        else if(count2 == 0 && element1 != arr[i])
        {
            element2 = arr[i];
            count2++;
        }
        else if(arr[i] == element1)
        {
            count1++;
        }
        else if(arr[i] == element2)
        {
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element1)
        {
            count1++;
        }
        else if(arr[i]==element2)
        {
            count2++;
        }
    }

    if(count1>n/3)
    {
        cout<<element1<<endl;
    }
    if(count2>n/3)
    {
        cout<<element2<<endl;
    }


    return 0;
}