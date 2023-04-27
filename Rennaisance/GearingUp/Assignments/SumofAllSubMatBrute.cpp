#include <iostream>
using namespace std;
//TC O (n ^ 6)
long long getSum(int i, int j, int k, int l, int mat[][100]) {
    long long subSum = 0;
    for(int x = i; x <= k; x++) { // O(n ^ 2)
        for(int y = j; y <= l; y++) {
            subSum += mat[x][y];
        }
    }
    return subSum;
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    int mat[n][100];
    cout << "Enter the matrix elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    long long sum = 0; //O(n ^ 4)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = i; k < n; k++) {
                for(int l = j; l < m; l++) {
                    sum += getSum(i, j, k, l, mat);
                }
            }
        }
    }

    cout << "The sum of all submatrices is " << sum << endl;

    return 0;
}