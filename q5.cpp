#include <iostream>
#include <vector>

using namespace std;


void reverseString(vector<char>& s) {
    int l = 0;
    int r = s.size() - 1;
    
    while (l< r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main() {
    string inputLine;
    getline(cin,inputLine);
    vector<char> s(inputLine.begin(),inputLine.end());
    reverseString(s);
    for(char c:s){
        cout << c;
    }
    cout<<endl;
    
    return 0;
}