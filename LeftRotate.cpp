#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> &arr, int d) {
  int n = arr.size();
  vector<int> rotatedArr(n);

  for (int i = 0; i < n; i++) {
    rotatedArr[(i + n - d) % n] = arr[i];
  }

  return rotatedArr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int d = 2;

  vector<int> rotatedArr = leftRotate(arr, d);

  for (int i : rotatedArr) {
    cout << i << " ";
  }

  return 0;
}
