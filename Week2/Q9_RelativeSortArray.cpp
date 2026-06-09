#include <iostream>
#include <vector>

using namespace std;


vector<int> relativeSortArray(const vector<int>& arr1, const vector<int>& arr2) {
    
    vector<int> freq(1001, 0);
    for (int num : arr1) {
        freq[num]++;
    }
    vector<int> result;
    for (int num : arr2) {
        while (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }
    for (int i = 0; i <= 1000; i++) {
        while (freq[i] > 0) {
            result.push_back(i);
            freq[i]--;
        }
    }

    return result;
}

int main() {
    int n1, n2;
    cout << "Enter size of arr1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of arr1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of arr2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of arr2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> sortedResult = relativeSortArray(arr1, arr2);
    cout << "Relative Sorted Array: [ ";
    for (int num : sortedResult) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}