#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x_or = 0;
    for(int i=0;i<n;i++)
    {
        x_or = x_or^arr[i];
    }
    cout<<x_or<<endl;
    return 0 ;
}