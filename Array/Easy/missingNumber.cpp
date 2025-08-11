#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    /*
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n+1;i++)
    {
        if(hash[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    */

    // Approach 2

    /*
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Missing number : "<< (n*(n+1)/2) - sum;
    */


    //Approach 3 

    int x1 = 0;
    int x2 = 0;
    for(int i=0;i<n;i++)
    {
        x1 = x1 ^ arr[i];
        x2 = x2 ^ (i+1);

    }
    int res = x1 ^ x2;
    cout<<"Missing number : "<< res;
    return  0;

}