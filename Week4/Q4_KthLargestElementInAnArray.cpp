#include <iostream>
#include <vector>

using namespace std;
int findKthLargest(const vector<int>& nums, int k) {
    int min_val = -10000;
    int max_val = 10000;
    vector<int> count(max_val - min_val + 1, 0);
    for (int num : nums) {
        count[num - min_val]++;
    }
    int count_seen = 0;
    for (int i = max_val; i >= min_val; i--) {
        count_seen += count[i - min_val];
        if (count_seen >= k) {
            return i;
        }
    }
    
    return -1; 
}

int main() {
    int n, k;
    
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    if (k > n || k <= 0) {
        cout << "Invalid value of k." << endl;
        return 1;
    }
    
    int result = findKthLargest(nums, k);
    cout << "Output: " << result << endl;
    
    return 0;
}
    
