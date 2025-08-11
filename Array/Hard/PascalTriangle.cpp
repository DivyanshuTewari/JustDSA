#include<bits/stdc++.h>
using namespace std;
vector<int> findRow(int n)
{
    vector<int>row(n);
    row[0]=1;
    for(int i=1;i<n;i++)
    {
        row[i]=row[i-1]*(n-i)/i;
        
    }    
    return row;

}
int main()
{
    
    
    // Ist type --> find element at given position(row and column)-->using nCr

    /*
    cout<<"Enter row and column -->";
    int row, column;
    cin>>row>>column;
    int result=1;
    for(int i=0;i<column-1;i++)
    {
        result=result*(row-i-1)/(i+1);
    }
    cout<<result;
    */

    //II type --> when we have to find a row 
    //Brute force we can run the above code for the whole row which produces n*r time complexity
    /*
    int n ;
    cin>>n;
    vector<int>row(n);
    row[0]=1;
    for(int i=1;i<n;i++)
    {
        row[i]=row[i-1]*(n-i)/i;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<row[i];
    }

    */

    //IIIrd type -- we have to find entire pascals triangle -->
    cout<<"Enter the number of rows-->";
    int n;
    cin>>n;
    vector<vector<int>> ptriangle(n,vector<int>(n));
    for(int i=1;i<=n;i++)
    {
        ptriangle[i-1] = findRow(i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ptriangle[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
    
}