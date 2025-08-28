#include<bits/stdc++.h>
using namespace std;
int count_Student(vector<int>arr , int maxPage)
{
    int n = arr.size();
    int curStudent = 1;
    int curPage = 0;
    for(int i=0;i<n;i++)
    {
        if(curPage + arr[i]<=maxPage)
        {
            curPage = curPage + arr[i];
        }
        else{
            curStudent++;
            curPage = arr[i];
        }
    }
    return curStudent;

}
int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int student ;
    cin>>student;
    if(student>n)
    {
        cout<<"Not Possible";
        return 0;
    }
    int low = INT_MIN;
    int high = 0;
    for(int i=0;i<n;i++)
    {
        if(low<arr[i])
        {
            low = arr[i];
        }
        high = high + arr[i];
    }
    /*
    LINEAR SEARCH APPROACH --> O(n^2)
    
    for(int i=low;i<=high;i++)
    {
        if(count_Student(arr,i) == student)
        {
            cout<<i<<endl;
            break;
        }
    }
    */


    //BINARY SEARCH APPROACH -->
    int ans ;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(count_Student(arr,mid) <= student)
        {
            ans = mid ;
            high = mid - 1;

        }
        else 
        {
            low = mid + 1;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}