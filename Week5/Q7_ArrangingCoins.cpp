#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    long low = 0;
    long high = n;
    int ans = 0;

    while (low <= high) {
        long mid = low + (high - low) / 2;
        long coinsUsed = mid * (mid + 1) / 2;

        if (coinsUsed == n) {
            return mid; 
        } else if (coinsUsed < n) {
            ans = mid;  
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of coins (n): ";
    cin >> n;

    int completeRows = arrangeCoins(n);
    cout << completeRows << endl;

    return 0;
}