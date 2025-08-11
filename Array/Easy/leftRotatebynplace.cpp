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
    int k;
    cin>>k;
    k = k % n;
    /*
    vector<int> arr2(n);
    int j =0;

    for(int i = k;i<n;i++)
    {
        arr2[j]= arr[i];
        j++;
    }
    for(int i =0;i<k;i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<"    ";
    }
    */

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"     ";
    }
    return 0;
}