#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int largestAltitude(const vector<int>& gain) {
    int current_altitude = 0;
    int max_altitude = 0;

    for (int i = 0; i < gain.size(); i++) {
        current_altitude += gain[i];
        max_altitude = max(max_altitude, current_altitude);
    }

    return max_altitude;
}

int main() {
    int n;
    cout << "Enter the number of elements in the gain array: ";
    cin >> n;

    vector<int> gain(n);
    cout << "Enter the net gain elements: ";
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    int highest = largestAltitude(gain);
    cout << "The highest altitude reached is: " << highest << endl;

    return 0;
}
