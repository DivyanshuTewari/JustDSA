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
    /*
    
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

    */

    //Optimal Approach 

    sort(arr.begin(),arr.end());
    for(int i = 0; i<n-3 ; i++)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            continue;
        }
        for(int j= i+1;j<n-2;j++)
        {
            if(j>i+1 && arr[j]==arr[j-1])
            {
                continue;
            }
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                int sum = arr[i]+arr[j]+arr[k]+arr[l];
                if(sum>target)
                {
                    l--;
                }
                else if(sum<target)
                {
                    k++;
                }
                else
                {
                    result.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1])
                    {
                        k++;
                    }
                    while(k<l && arr[l]==arr[l+1])
                    {
                        l--;
                    }
                }
            }
            
        }
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