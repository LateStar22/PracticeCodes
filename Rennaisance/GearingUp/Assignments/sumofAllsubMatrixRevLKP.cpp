#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    int mat[n][m];
    cout << "Enter the matrix elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    long long sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            long long contrib = (long long)(i+1)*(n-i)*(j+1)*(m-j)%MOD * mat[i][j]%MOD;
            sum = (sum + contrib)%MOD;
        }
    }

    cout << "The sum of all submatrices modulo 10^9+7 is " << sum << endl;

    return 0;
}