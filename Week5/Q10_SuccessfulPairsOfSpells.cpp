#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    int n = spells.size();
    int m = potions.size();
    vector<int> pairs(n);
    sort(potions.begin(), potions.end());

    for (int i = 0; i < n; i++) {
        long long currentSpell = spells[i];
        int low = 0;
        int high = m - 1;
        int firstValidIdx = m; 

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (currentSpell * potions[mid] >= success) {
                firstValidIdx = mid; 
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        pairs[i] = m - firstValidIdx;
    }

    return pairs;
}

int main() {
    int n, m;
    cout << "Enter the number of spells (n): ";
    cin >> n;
    
    vector<int> spells(n);
    cout << "Enter the strengths of the spells: ";
    for (int i = 0; i < n; i++) {
        cin >> spells[i];
    }

    cout << "Enter the number of potions (m): ";
    cin >> m;

    vector<int> potions(m);
    cout << "Enter the strengths of the potions: ";
    for (int i = 0; i < m; i++) {
        cin >> potions[i];
    }

    long long success;
    cout << "Enter the success threshold: ";
    cin >> success;

    vector<int> result = successfulPairs(spells, potions, success);

    cout << "Output: [";
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}