#include <iostream>
#include <vector>

using namespace std;
bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int midDays) {
    int bouquetsCreated = 0;
    int adjacentCount = 0;

    for (int day : bloomDay) {
        if (day <= midDays) {
            
            adjacentCount++;
            if (adjacentCount == k) {
                bouquetsCreated++;
                adjacentCount = 0; 
            }
        } else {

            adjacentCount = 0;
        }
    }

    return bouquetsCreated >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {

    long long totalFlowersNeeded = (long long)m * k;
    if (totalFlowersNeeded > bloomDay.size()) {
        return -1;
    }

    int low = bloomDay[0];
    int high = bloomDay[0];
    for (int day : bloomDay) {
        if (day < low) low = day;
        if (day > high) high = day;
    }

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canMakeBouquets(bloomDay, m, k, mid)) {
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
    cout << "Enter the number of flowers in the garden: ";
    cin >> n;

    vector<int> bloomDay(n);
    cout << "Enter the bloom days for each flower: ";
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    int m, k;
    cout << "Enter the number of bouquets needed (m): ";
    cin >> m;
    cout << "Enter the number of adjacent flowers required per bouquet (k): ";
    cin >> k;

    int result = minDays(bloomDay, m, k);
    cout << "Output: " << result << endl;

    return 0;
}