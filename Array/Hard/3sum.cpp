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
}