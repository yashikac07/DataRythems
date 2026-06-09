#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(const vector<int>& nums, int k) {
    
    unordered_map<int, int> prefixSumCounts;
    
    
    prefixSumCounts[0] = 1;
    
    int currentSum = 0;
    int count = 0;
    
    for (int num : nums) {
        currentSum += num;
        
        
        if (prefixSumCounts.find(currentSum - k) != prefixSumCounts.end()) {
            count += prefixSumCounts[currentSum - k];
        }
        
        
        prefixSumCounts[currentSum]++;
    }
    
    return count;
}

int main() {
    int n, k;
    
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target sum (k): ";
    cin >> k;
    
    int result = subarraySum(nums, k);
    
    cout << "Total number of subarrays whose sum equals " << k << " is: " << result << endl;
    
    return 0;
}