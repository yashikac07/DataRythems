#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(const vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    int n;
    cout<< "Enter the number of elements in the array: ";
    cin>> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

   
    if (containsDuplicate(nums)) {
        cout << "Output: true " << endl;
    } else {
        cout << "Output: false " << endl;
    }

    return 0;
}