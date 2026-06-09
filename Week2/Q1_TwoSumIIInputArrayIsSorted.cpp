#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,n,j,t;
    cout<<"Enter the length of the array: ";
    cin>> n;
    cout<<"Enter the target number: ";
    cin>> t;
    vector<int>arr1(n);
    vector<int>arr2(2);
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++){
        cin>> arr1[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( arr1[i] +arr1[j]==t){
                arr2[0]=i+1;
                arr2[1]=j+1;
                for(int num:arr2){
                cout<<num<<" ";
                 }

            }
            else{
                return 0;
            }
        }
    }

}