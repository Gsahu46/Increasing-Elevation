#include<bits/stdc++.h>
using namespace std;

void f(int *arr, int idx, int n)
{
    if(idx == n) return;
    
    cout << arr[idx] << " ";
    f(arr, idx + 1, n);
}

int main()
{
    int n; 
    cout << "Enter the size of Array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the Array: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    } 
    f(arr, 0, n);
    return 0;
}