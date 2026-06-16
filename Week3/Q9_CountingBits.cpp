#include <iostream>
#include <vector>

using namespace std;
vector<int> countBits(int n) {
    
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;
    vector<int> result = countBits(n);
    cout << "Output: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}