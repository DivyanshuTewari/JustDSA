#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int buy_price = arr[0];
    int current_profit = 0;
    int max_profit = 0;
    for(int i=1;i<n;i++)
    {
        current_profit = arr[i] - buy_price;
        if(max_profit < current_profit)
        {
            max_profit = current_profit;
        }
        if(arr[i]<buy_price)
        {
            buy_price = arr[i];
        }
    }
    cout<<"Max Profit :" <<max_profit;
    return 0;


}