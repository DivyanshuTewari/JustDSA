#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = -1;

    // Find BreakPoint -->
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        // Swap with least difference
        for (int i = n - 1; i > index; i--)
        {
            if (arr[index] < arr[i])
            {
                swap(arr[index], arr[i]);
                break;
            }
        }

        // Reversing -->
        reverse(arr.begin() + index + 1, arr.end());
    }
    else{
        reverse(arr.begin(), arr.end());
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}