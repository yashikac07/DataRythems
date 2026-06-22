#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        vector<int>& last_merged = merged.back();
        if (intervals[i][0] <= last_merged[1]) {
            last_merged[1] = max(last_merged[1], intervals[i][1]);
        } else {

            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main() {
    int num_intervals;
    cout << "Enter the number of intervals: ";
    cin >> num_intervals;

    vector<vector<int>> intervals(num_intervals, vector<int>(2));
    cout << "Enter the intervals (start and end pairs):\n";
    for (int i = 0; i < num_intervals; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }
    vector<vector<int>> result = mergeIntervals(intervals);
    cout << "\nMerged Intervals:\n[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}