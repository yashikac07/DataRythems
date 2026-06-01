#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,i;
    
    cout<<"Enter the number of terms in array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array in non decreasing order: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]*arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}