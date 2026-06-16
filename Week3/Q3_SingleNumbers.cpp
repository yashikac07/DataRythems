#include <iostream>
#include <vector>

using namespace std;


int singleNumber(const vector<int>& nums) {
    int uniqueElement = 0;
    

    for (int num : nums) {
        uniqueElement ^= num;
    }
    
    return uniqueElement;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    vector<int> nums(size);
    cout << "Enter " << size << " elements (where every element appears twice except one): " << endl;
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
