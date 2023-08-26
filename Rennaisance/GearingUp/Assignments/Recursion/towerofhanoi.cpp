#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int N;
    cin >> N;
    vector<vector<int>> boxes(N + 1);
        for (int i = 1; i <= N; i++)
        {
            boxes[1].push_back(i);
        }
        cout << typeid(boxes[1]).name();
    return 0;
}