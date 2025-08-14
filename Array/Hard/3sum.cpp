#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Brute Force method -- TC - O(n^2 logn)

    /*
    set<vector<int>> st;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp.insert({arr[i],i});
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff = - arr[i] - arr [j];
            if(mpp.find(diff) != mpp.end())
            {
                if(mpp[diff] != i && mpp[diff] != j)
                {
                    vector<int> res;
                    res.insert(res.end(),{arr[i],arr[j],diff});
                    sort(res.begin(),res.end());
                    st.insert(res);
                }
            }
        }


    }
    vector<vector<int>> result;
    for(auto it : st)
    {
        result.push_back(it);
    }
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[result.size()-1].size();j++)
        {
            cout<<result[i][j]<<"   ";
        }
        cout<<endl;
    }
    */

    //Optimal solution without using set
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum > 0)
            {
                k--;
            }
            else if (sum<0)
            {
                j++;
            }
            else
            {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])
                {
                    j++;
                }
                while(j<k && arr[k]==arr[k+1])
                {
                    k--;
                }

            }
        }

    }


    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[result.size()-1].size();j++)
        {
            cout<<result[i][j]<<"       ";
        }
        cout<<endl;
    }


    return 0 ;
}