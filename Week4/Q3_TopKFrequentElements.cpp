#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> topKFrequent(const vector<int>& nums, int k) {
    unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
    }
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto& pair : countMap) {
        int element = pair.first;
        int frequency = pair.second;
        buckets[frequency].push_back(element);
    }
    vector<int> result;
    for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) {
                break;
            }
        }
    }
    
    return result;
}

int main() {
    int n, k;
    
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }
    
    vector<int> nums(n);
    cout << "Enter " << n << " integers s: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    if (k > n || k <= 0) {
        cout << "Invalid value of k." << endl;
        return 1;
    }
    vector<int> result = topKFrequent(nums, k);
    cout << "Output: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}