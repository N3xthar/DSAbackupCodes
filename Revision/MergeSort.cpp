#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  int left = low;
  int right = mid + 1;

  // compare elements from both halves
  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  // remaining elements of left half
  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  // remaining elements of right half
  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  // copy back to original array
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void mergeSort(vector<int> &arr, int low, int high) {
  if (low >= high)
    return;

  int mid = low + (high - low) / 2;

  mergeSort(arr, low, mid);      // left half
  mergeSort(arr, mid + 1, high); // right half
  merge(arr, low, mid, high);    // merge
}

int main() {
  vector<int> arr = {5, 1, 4, 3, 2};

  mergeSort(arr, 0, arr.size() - 1);

  for (auto x : arr) {
    cout << x << " ";
  }
}
