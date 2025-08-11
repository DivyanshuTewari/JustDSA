#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //Approach 1 -->
    /*
    vector<vector<int>> sol(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sol[i][j] = arr[n-j-1][i];
        }
    }
    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<sol[i][j]<<"  ";
        }
        cout<<endl;
    }

    */

    //Approach 2 -->

    // Transpose the matrix

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i<j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    //Reverse The elements-->
    for(int i=0;i<n;i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    

}