#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Number of unique elements: 0" << endl;
        return 0;
    }
    vector<int> nums(n);
    cout << "Enter the sorted array elements (non-decreasing order): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int i = 0; 

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) { 
            i++;                  
            nums[i] = nums[j];   
        }
    }

    int k = i + 1;
    cout << "Number of unique elements: " << k << endl;
    cout << "Modified array (first " << k << " elements): ";
    for (int index = 0; index < k; index++) {
        cout << nums[index] << " ";
    }
    cout << endl;

    return 0;
}