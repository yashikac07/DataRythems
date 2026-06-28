#include <iostream>
#include <vector>

using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int low = 0;
    int high = letters.size() - 1;
    char ans = letters[0]; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (letters[mid] > target) {
            ans = letters[mid];
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of characters in the array: ";
    cin >> n;

    vector<char> letters(n);
    cout << "Enter the characters (sorted in non-decreasing order): ";
    for (int i = 0; i < n; i++) {
        cin >> letters[i];
    }

    char target;
    cout << "Enter the target character: ";
    cin >> target;

    char result = nextGreatestLetter(letters, target);
    cout << result << endl;

    return 0;
