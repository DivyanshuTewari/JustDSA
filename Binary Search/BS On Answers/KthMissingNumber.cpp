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
    int k ;
    cin>>k;

    /* APPROACH 1 - O(n)
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i-1>k)
        {
            if(i>0)
            {
                cout<<arr[i-1]+k-(arr[i-1]-(i-1)-1); //On simplifying --> k+i;
                return 0;
            }
            cout<<k;
            return 0;
        }

    }
    cout<<arr[n-1]+k-(arr[n-1]-(n-1)-1); //On simplifying --> k+n;

    */


    //APPROACH 2 - O(log n)
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]-mid-1>k)
        {
            if(mid>0)
            {
                ans = arr[mid-1]+k-(arr[mid-1]-(mid-1)-1);
                high = mid - 1;
            }
            else{
                ans = k;
                break;
            }
        }
        else{
            low = mid +1 ;
        }
    }
    if(ans == 0)
    {
        ans = k + n; //Obtained via--> arr[n-1]+k-(arr[n-1]-(n-1)-1);
    }
    cout<<ans<<endl;




    return 0;
    
}