#include <iostream>
#include <vector>

using namespace std;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int xor1 = 0;
    int xor2 = 0;
    for (int num : nums1) {
        xor1 ^= num;
    }
    for (int num : nums2) {
        xor2 ^= num;
    }
    
    int ans = 0;
    if (nums2.size() % 2 != 0) {
        ans ^= xor1;
    }
    if (nums1.size() % 2 != 0) {
        ans ^= xor2;
    }
    
    return ans;
}

int main() {
    int n, m;

    cout << "Enter the number of elements in nums1: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements for nums1: ";
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    cout << "Enter the number of elements in nums2: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements for nums2: ";
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    int result = xorAllNums(nums1, nums2);
    cout << "The bitwise XOR of all pairings is: " << result << endl;

    return 0;
}