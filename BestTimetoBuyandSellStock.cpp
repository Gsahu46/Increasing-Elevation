#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int BestTimetoBuyandSellStock(vector<int> &arr, int n)
{
    int maxprofit = 0;
    int minsofar = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        minsofar = min(minsofar, arr[i]);
        int profit = arr[i] - minsofar;
        maxprofit = max(maxprofit, profit);
    }

    return maxprofit;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = BestTimetoBuyandSellStock(arr, n);

    cout << "Maximum Profit: " << result << endl;
    return 0;
}
