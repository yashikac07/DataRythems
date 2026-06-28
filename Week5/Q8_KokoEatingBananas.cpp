#include <iostream>
#include <vector>

using namespace std;
long long calculateTotalHours(const vector<int>& piles, int k) {
    long long totalHours = 0;
    for (int pile : piles) {

        totalHours += (pile + k - 1) / k;
    }
    return totalHours;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = 0;
    for (int pile : piles) {
        if (pile > high) {
            high = pile;
        }
    }

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (calculateTotalHours(piles, mid) <= h) {
            ans = mid;       
            high = mid - 1; 
        } else {
            low = mid + 1;    
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter the number of bananas in each pile: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int h;
    cout << "Enter the hours available (h): ";
    cin >> h;

    int result = minEatingSpeed(piles, h);
    cout  << result << endl;

    return 0;
}