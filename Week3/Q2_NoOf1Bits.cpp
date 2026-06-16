#include <iostream>
using namespace std;

int bits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); 
        count++;         
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int result = bits(n);
    cout << "Number of 1 bits : " << result << endl;

    return 0;
}