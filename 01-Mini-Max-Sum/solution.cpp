#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int x : arr) {
        total += x;

        if (x < minVal)
            minVal = x;

        if (x > maxVal)
            maxVal = x;
    }

    cout << total - maxVal << " " << total - minVal;
}
