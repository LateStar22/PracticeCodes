#include<iostream>
using namespace std;

/*Sending zeros on to the right side of array, we can try it for putting zeros on left side of array for that we need to have last occurence of 0*/

void zerosToEndRightSide(int arr[], int n) {

  //finding first zero occurrence
  int k = 0;
  while (k < n) {
    if (arr[k] == 0) {
      break;
    } else {
      k = k + 1;
    }
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      swap(arr[j],arr[i]);
      i++;
    }

    j++;

  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] ={ 0,2,0,1,0,4,0};
  zerosToEndRightSide(arr, 7);
}

