#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = candles[0];
    int count = 0;

    for (int x : candles) {
        if (x > maxHeight) {
            maxHeight = x;
            count = 1;
        }
        else if (x == maxHeight) {
            count++;
        }
    }

    return count;
}
