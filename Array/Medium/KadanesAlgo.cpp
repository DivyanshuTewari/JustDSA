//Maximum SubArray Sum -->
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

    //Approach 1 -(Brute force)
    /*
    int prevsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum = sum + arr[j];
            prevsum = max(prevsum , sum);
        }       

    }
    cout<<"Max sum :"<<prevsum;
    */

    //Approach 2 -->
    int maxi = INT_MIN;
    int sum = 0;
    int ansst = -1;
    int ansend = -1;
    int start;
    for(int i=0;i<n;i++)
    {
        if(sum == 0)
        {
            start = i;
        }
        sum = sum + arr[i];
        if(sum>maxi)
        {
            maxi = sum ;
            ansst = start;
            ansend = i;
        }
        if(sum<0)
        {
            sum=0;
        }
    } 
    cout<<"Max sum :"<<maxi<<endl;
    cout<<ansst<<" - "<<ansend;

    
}