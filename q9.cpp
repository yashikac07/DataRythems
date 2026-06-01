#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers in the range [0, " << n << "]:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int expectedSum = n * (n + 1) / 2;
    
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    int missing = expectedSum - actualSum;
    cout << "The missing number is: " << missing << endl;

    return 0;
}