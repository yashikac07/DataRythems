#include <iostream>
#include <vector>

using namespace std;

bool Duplicate(const vector<int>& nums, int k) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= i + k && j < n; j++) {
            if (nums[i] == nums[j]) {
                return true; 
            }
        }
    }

    return false; 
}

int main() {
   int n;
   cout<<"Enter the number of elements in the array: ";
   cin>>n;
   if(n<=0){
    cout<<"Array must contain at least 1 element."<<endl;
    return 0;
   }
   vector<int>nums(n);
   cout<<"Enter the elements: ";
   for(int i=0;i<n;i++){
    cin>>nums[i];
   }
   int k;
   cout<<"Enter the maximum distance";
   cin>>k;
   cout<<boolalpha;
   bool result=Duplicate(nums,k);
   cout<< result<<endl;
   
   return 0;

}