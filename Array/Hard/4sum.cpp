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
    int target ;
    cin>>target;
    vector<vector<int>> result;
    
    //Brute Force using set to avoid repeated values
    
    set<vector<int>> st;
    for(int i = 0;i<n-3;i++)
    {
        for(int j = i+1;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target)
                    {
                        vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                        
                    }
                }
            }
        }
    }

    for(auto it:st)
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