#include <iostream>
#include <vector>

using namespace std;

int main() {
   
    int n;
    cout<<"Enter the length of array: ";
    cin >> n;
    cout<<"Enter the elements: ";
    vector<int> arr1(n);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

 
    if (n == 0) return 0;

    vector<int> unique_arr;
    
    unique_arr.push_back(arr1[0]); 

  
    for (int i = 1; i < n; i++) {
        if (arr1[i] != arr1[i - 1]) {
            unique_arr.push_back(arr1[i]);
        }
    }

     cout << "\n" << unique_arr.size() <<", ";
    cout << "Nums: ";
    for (int num : unique_arr) {
        cout << num << " ";
    }
  
    return 0;
}