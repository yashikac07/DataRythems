#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '{' && close == '}') return true;
    if (open == '[' && close == ']') return true;
    return false;
}


string isBalanced(string s) {
    stack<char> st;

    for (char ch : s) {
       
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
       
        else if (ch == ')' || ch == '}' || ch == ']') {
           
            if (st.empty()) {
                return "NO";
            }
            
           
            if (isMatchingPair(st.top(), ch)) {
                st.pop(); 
            } else {
                return "NO"; 
            }
        }
    }

    
    return st.empty() ? "YES" : "NO";
}

int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    
    return 0;
}