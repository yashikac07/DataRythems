#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int total_sum = 0;
    
    
    for (int num : nums) {
        total_sum += num;
    }

    int left_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
       
        if (left_sum == total_sum - left_sum - nums[i]) {
            return i;
        }
        left_sum += nums[i];
    }

    return -1;
}


int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    if (n<=0){
        cout<<"Invalid array size"<<endl;
        return 0;

    }
    vector<int>nums(n);
    cout<<"Enter"<<n<<"Integers: ";
    for(int i=0; i<n;++i){
        cin>> nums[i];
    }
    int result = pivotIndex(nums);
    if (result!= -1){
        cout<<"The leftmost pivot index is: "<<result<<endl;
    }
    else{
        cout<<"No pivot index exists. Output=-1"<<endl;

    }

    return 0;
}