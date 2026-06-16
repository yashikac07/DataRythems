#include <iostream>
#include <vector>

using namespace std;

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    int n = arr.size();
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] ^ arr[i];
    }
    
    vector<int> ans;
    for (const auto& q : queries) {
        int left = q[0];
        int right = q[1];
        ans.push_back(pref[right + 1] ^ pref[left]);
    }
    
    return ans;
}

int main() {
    int n, m;
    
    // 1. Input Array
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n)) return 1; // Safety check
    
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 2. Input Queries
    cout << "Enter the number of queries: ";
    if (!(cin >> m)) return 1; // Safety check
    
    vector<vector<int>> queries(m, vector<int>(2));
    cout << "Enter each query as 'left right' pairs:\n";
    for (int i = 0; i < m; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    // 3. Process Logic
    vector<int> result = xorQueries(arr, queries);

    // 4. Output Printing (Matches your lines 40-47 exactly)
    cout << "Output: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
