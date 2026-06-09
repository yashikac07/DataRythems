#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cout << "Enter the length of subarray: ";
    cin >> k;

    double current_window_sum = 0;
    for(int i = 0; i < k; i++) {
        current_window_sum += nums[i];
    }

    double max_avg = current_window_sum / k;
    for(int i = k; i < n; i++) {
        current_window_sum += nums[i] - nums[i - k];
        max_avg = max(max_avg, current_window_sum / k);
    }

    cout << "Maximum average: " << max_avg << endl;
    return 0;
}