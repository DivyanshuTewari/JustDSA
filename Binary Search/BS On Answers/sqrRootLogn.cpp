#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int low = 1;
    int high = n;
    int ans = 1;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if((mid*mid)==n)
        {
            cout<<"Sqr Root :"<<mid;
            return 0;
        }
        if((mid*mid)>n)
        {
            high = mid-1;
        }
        else
        {
            ans = mid;
            low = mid+1;
        }
    }
    cout<<"Sqr Root :"<<ans;
    return 0;
}