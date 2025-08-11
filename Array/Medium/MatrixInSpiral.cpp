#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left ;i<=right;i++)
        {
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top <= bottom)
        {
            for(int i=right;i>=left;i--)
          {
            cout<<matrix[bottom][i]<<" ";
          }
        }
        bottom--;
        if(left<= right)
        {
            for(int i=bottom;i>=top;i--)
        {
            cout<<matrix[i][left]<<" ";
        }
        }
        left++;

    }

}