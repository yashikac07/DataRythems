#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    
    int child_ptr = 0;
    int cookie_ptr = 0;
    while (child_ptr < g.size() && cookie_ptr < s.size()) {
        if (s[cookie_ptr] >= g[child_ptr]) {
            child_ptr++; 
        }
        cookie_ptr++; 
    }
    
    return child_ptr; 
}

int main() {
    int num_children, num_cookies;
    
    cout << "Enter the number of children: ";
    cin >> num_children;
    vector<int> g(num_children);
    cout << "Enter the greed factors of the children: ";
    for (int i = 0; i < num_children; i++) {
        cin >> g[i];
    }
    
    cout << "Enter the number of cookies: ";
    cin >> num_cookies;
    vector<int> s(num_cookies);
    cout << "Enter the sizes of the cookies: ";
    for (int i = 0; i < num_cookies; i++) {
        cin >> s[i];
    }
    
    int result = findContentChildren(g, s);
    cout << "Maximum number of content children: " << result << endl;
    
    return 0;
}