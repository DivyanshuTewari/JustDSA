#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    vector<int> intersection;
    int i = 0;
    int j=0;
    while(i<n && j<m)
    {
        if((intersection.size()==0 && arr1[i] == arr2[j])|| (intersection.back() != arr1[i] && arr1[i] == arr2[j]))
        {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        if(arr2[j]<arr1[i])
        {
            j++;
        }
    }
    for(int i=0;i<intersection.size();i++)
    {
        cout<<intersection[i]<<"        ";
    }
    return 0;
}