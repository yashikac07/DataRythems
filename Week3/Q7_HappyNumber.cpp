#include <iostream>

using namespace std;
int getNext(int n) {
    int totalSum = 0;
    while (n > 0) {
        int d = n % 10;
        totalSum += d * d;
        n = n / 10;
    }
    return totalSum;
}
bool isHappy(int n) {
    int slow = n;
    int fast = getNext(n);
    while (fast != 1 && slow != fast) {
        slow = getNext(slow);        
        fast = getNext(getNext(fast)); 
    }
    return fast == 1;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isHappy(n)) {
        cout << n << " is a Happy Number! (true)" << endl;
    } else {
        cout << n << " is NOT a Happy Number. (false)" << endl;
    }

    return 0;
}