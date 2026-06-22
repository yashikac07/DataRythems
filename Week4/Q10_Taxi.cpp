#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of groups: ";
    cin >> n;
    int count[5] = {0};
    
    cout << "Enter the sizes of each group (space-separated values between 1 and 4): ";
    for (int i = 0; i < n; i++) {
        int group_size;
        cin >> group_size;
        if (group_size >= 1 && group_size <= 4) {
            count[group_size]++;
        }
    }
    
    int total_taxis = 0;
    total_taxis += count[4];
    total_taxis += count[3];
    count[1] = max(0, count[1] - count[3]); 
    total_taxis += count[2] / 2;
    if (count[2] % 2 != 0) {
        total_taxis += 1; 
        count[1] = max(0, count[1] - 2);
    }
    if (count[1] > 0) {
        total_taxis += (count[1] + 3) / 4; 
    }
    
    cout << "\nMinimum number of taxis required: " << total_taxis << endl;
    
    return 0;
}