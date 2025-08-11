#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    // Approach 1 --> O(n*m)*O(n+m)+O(n*m)
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                for(int k=0;k<n;k++)
                {
                    if (matrix[k][j]==1)
                    {
                        matrix[k][j]=-1;
                    }
                }
                for(int l=0;l<m;l++)
                {
                    if (matrix[i][l]==1)
                    {
                        matrix[i][l]=-1;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (matrix[i][j]==-1)
            {
                matrix[i][j]=0;
            }
        }
    }
    */

    //Approach 2 -->
    vector<int>row(n,0);
    vector<int>column(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(row[i]==1)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for(int j=0;j<m;j++)
    {
        if(column[j]==1)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][j]=0;
            }
        }
    }




    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}