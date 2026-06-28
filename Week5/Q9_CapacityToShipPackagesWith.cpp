#include <iostream>
#include <vector>

using namespace std;
bool canShip(const vector<int>& weights, int days, int maxCapacity) {
    int daysRequired = 1;
    int currentWeightSum = 0;

    for (int weight : weights) {
        if (currentWeightSum + weight > maxCapacity) {
            
            daysRequired++;
            currentWeightSum = weight;
        } else {
            
            currentWeightSum += weight;
        }
    }
    return daysRequired <= days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = 0;
    int high = 0;
    for (int weight : weights) {
        if (weight > low) {
            low = weight; 
        }
        high += weight;  
    }

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canShip(weights, days, mid)) {
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
    cout << "Enter the number of packages: ";
    cin >> n;

    vector<int> weights(n);
    cout << "Enter the weights of the packages: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int days;
    cout << "Enter the number of days allowed: ";
    cin >> days;

    int minCapacity = shipWithinDays(weights, days);
    cout << minCapacity << endl;

    return 0;
}