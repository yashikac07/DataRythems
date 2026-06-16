#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;

    vector<int>nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    int missingNumber = expectedSum - actualSum;

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}