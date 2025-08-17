#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0 ;
    int Nsum = (n*(n+1))/2;
    int sum2 = 0;
    int Nsum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];
        sum2 = sum2 + arr[i]*arr[i];
        Nsum2 = Nsum2 + (i+1)*(i+1);
    }
    int x = sum - Nsum;
    int y = sum2 - Nsum2;
    y = y / x;
    vector<int> result(2);
    result[0] = (x+y)/2;
    result[1] = result[0] - x;
    cout<<result[0]<<"  "<<result[1]<<endl;
    
}