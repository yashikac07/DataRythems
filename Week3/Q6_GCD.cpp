#include <iostream>
#include <string>
#include <numeric> 

using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    string str1, str2;
    cout << "Enter first string (str1): ";
    cin >> str1;
    cout << "Enter second string (str2): ";
    cin >> str2;
    if (str1 + str2 != str2 + str1) {
        cout << "Greatest Common Divisor of Strings: \"\"" << endl;
    } 
    else {
        int gcdLength = gcd(str1.length(), str2.length());
        string result = str1.substr(0, gcdLength);
        
        cout << "Greatest Common Divisor of Strings: " << result << endl;
    }

    return 0;
}