#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>> n;
vector<int>arr(n);
int CS=0;

cout<<"Enter the elements: ";
for(int i = 0;i<n;i++){
    int a;
    cin>>a;
    CS+=a;
    arr[i]=CS;
}
cout<<"Running Sum Array: ";
for(int num : arr){
    cout<<num<<" ";
}
cout<<endl;

return 0;
}