#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    int n;
    cin >> n;
    arr[i] = n;
  }
  int check = 0;
  if (check == 0) {
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        check = 1;
      } else {
        check = 0;
      }
      if (check == 0) {
        break;
      }
    }
  }
  if (check == 0) {
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] < arr[i + 1]) {
        check = 1;
      } else {
        check = 0;
      }
      if (check == 0) {
        break;
      }
    }
  }
  int equal = 0;
  if (check == 0) {
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == arr[i + 1]) {
        equal = 1;
        break;
      }
    }
  }
  int a = 0;
  int i = 0;
  if (check == 0 && equal == 0) {
    for (i = 0; i < n - 1; i++) {
      if (arr[i] < arr[i + 1]) {
        a = arr[i + 1];
        break;
      }
    }
  }
  if (arr[n - 1] == a) {
    check = 1;
  }
  if (check == 0 && equal == 0) {
    for (int j = i + 1; j < n - 1; j++) {
      if (arr[j] <= arr[j + 1]) {
        check = 1;
      } else {
        check = 0;
      }
      if (check == 0) {
        break;
      }
    }
  }
  if (check == 1) {
    cout << "true";
  } 
  else if (equal == 1) {
    cout << "false";
  } 
  else {
    cout << "false";
  }
}