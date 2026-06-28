#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;

    int m = matrix.size();       
    int n = matrix[0].size();    

    int low = 0;
    int high = (m * n) - 1;     

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] < target) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }

    return false;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m) and columns (n): ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);
    if (found) {
        cout << " true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}