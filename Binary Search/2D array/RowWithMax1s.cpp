#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row , column ;
    cin>>row>>column;
    vector<vector<int>> matrix(row, vector<int>(column));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int maxRowIndex = -1;
    int max1 = INT_MAX;
    
    for(int i=0;i<row;i++)
    {        
        int low = 0;
        int high = column-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(matrix[i][mid] == 1)
            {
                if(max1>mid)
                {
                    max1 = mid;
                    maxRowIndex = i;
                }
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
                
    }
    cout<<"Max 1's Row-->"<<maxRowIndex;
}