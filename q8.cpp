#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m,n,i,j;
    
    cout<<"Enter the number of terms in the first array: ";
    cin>>n;
    
    cout<<"Enter the number of terms in the second array: ";
    cin>>m;
    vector<int>arr2(m);
    vector<int>arr1(n+m);
    j=n;
    
    cout<<"Enter the elements of first array in non decreasing order: ";
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<m;i++){
        arr1[n+i]=0;
    }
    cout<<"Enter the elements of second array in non decreasing order: ";
    for(i=0;i<m;i++){
        cin>>arr2[i];
        arr1[j]=arr2[i];
        j++;
    }
    sort(arr1.begin(),arr1.end());
    for(int num:arr1){
        cout<<num<<" ";
    }
    return 0;
}