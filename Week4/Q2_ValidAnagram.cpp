#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    vector<int> count(26, 0);
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++; 
        count[t[i] - 'a']--; 
    }
    
    for (int c : count) {
        if (c != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s, t;
    
    cout << "Enter the first string (s): ";
    cin >> s;
    
    cout << "Enter the second string (t): ";
    cin >> t;
    if (isAnagram(s, t)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }
    
    return 0;
}