#include <iostream>
#include <vector>

using namespace std;


int subarraySum(const vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int current_sum = 0;
        for (int j = i; j < n; ++j) {
            current_sum += nums[j];
            if (current_sum == k) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " integers (separated by spaces): ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Enter the target sum (k): ";
    cin >> k;
    int result = subarraySum(nums, k);
    cout << "\nTotal subarrays with sum " << k << " is: " << result << endl;
    
    return 0;
}