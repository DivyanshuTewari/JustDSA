#include<bits/stdc++.h>
using namespace std;
int main()
{
    //In this we look for a cliff. If there exist more than 1 cliff then it means this array is sorted otherwise sorted

    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cliff = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i%n]>arr[(i+1)%n])
        {
            cliff++;
        }
    }
    if(cliff==1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}