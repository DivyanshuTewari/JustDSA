#include<bits/stdc++.h>
using namespace std;
int poww(int num , int power)
{
    int ans = 1;
    while(power>1)
    {
        if(power%2==1)
        {
            ans = ans * num;
            power = power - 1;
            
        }
        else{
            power = power/2;
            num = num * num;
        }
    }
    ans = ans * num ;
    
    return ans;
}
int main()
{
    int num ;
    cout<<"Enter number -->";
    cin>>num;
    int n ;
    cout<<"Enter root-->";
    cin>>n;
    int low = 1;
    int high = num;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(poww(mid,n) == num)
        {
            cout<<mid;
            return 0;
        }
        if(poww(mid,n) > num)
        {
            high = mid -1;

        }
        else
        {
            low = mid+1;

        }
    }
    cout<<-1;
    return 0;   
    
}