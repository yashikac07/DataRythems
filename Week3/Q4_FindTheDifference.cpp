#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    char result = 0;
    for (char c : s) {
        result ^= c;
    }
    for (char c : t) {
        result ^= c;
    }

    cout << "The added letter is: " << result << endl;

    return 0;
}