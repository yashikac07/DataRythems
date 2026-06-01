#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
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

    cout << boolalpha; 

    cout << "\nAre they anagrams? " << isAnagram(s, t) << endl;

    return 0;
}