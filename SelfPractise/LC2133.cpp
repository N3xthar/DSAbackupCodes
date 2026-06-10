#include "bits/stdc++.h"
using namespace std;

// function for printing matrix

void printMatrix(const vector<vector<int>> &matrix) {

  for (int i = 0; i < matrix.size(); i++) {

    for (int j = 0; j < matrix[i].size(); j++) {

      cout << matrix[i][j] << " ";
    }

    cout << endl;
  }
}

int main() {

  int n = 3;

  // n x n matrix

  vector<vector<int>> matrix = {{1, 3, 2}, {2, 1, 1}, {3, 2, 1}};

  printMatrix(matrix);

  for (int k = 0; k < n; k++) {
    unordered_set<int> data;

    for (int i = 0; i < n; i++) {
      data.insert(matrix[i][k]);
    }
    for (int j = 0; j < n; j++) {
      data.insert(matrix[j][k]);
    }

    for (int i = 0; i < n; i++) {
      if (data.find(matrix[i][k]) == data.end())
        return false;
    }
    for (int j = 0; j < n; j++) {
      if (data.find(matrix[j][k]) == data.end())
        return false;
    }
  }

  return true;
}
