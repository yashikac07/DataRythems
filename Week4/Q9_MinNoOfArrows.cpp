#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compareEnd(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

int findMinArrowShots(vector<vector<int>>& points) {
    if (points.empty()) return 0;
    sort(points.begin(), points.end(), compareEnd);

    int arrows = 1;
    int current_arrow_pos = points[0][1];
    for (size_t i = 1; i < points.size(); i++) {

        if (points[i][0] > current_arrow_pos) {
            arrows++;
            current_arrow_pos = points[i][1];
        }
    }

    return arrows;
}

int main() {
    int num_balloons;
    cout << "Enter the number of balloons: ";
    cin >> num_balloons;

    vector<vector<int>> points(num_balloons, vector<int>(2));
    cout << "Enter the start and end coordinates for each balloon:\n";
    for (int i = 0; i < num_balloons; i++) {
        cin >> points[i][0] >> points[i][1];
    }
    int result = findMinArrowShots(points);
    cout << "Minimum number of arrows required: " << result << endl;

    return 0;
}