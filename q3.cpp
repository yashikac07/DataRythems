#include<iostream>
#include<vector>
using namespace std;
int q( const vector<int>&nums){
        int qcount = 0;
        for( int num:nums){
            if( num==0)continue;
            int currentNum = num;
            if ( currentNum<0){
                currentNum= - currentNum;
            
            }
            int digitCount=0;
            while(currentNum>0){
                digitCount++;
                currentNum/=10;
            }
            if(digitCount%2==0){
                qcount++;
            }
        }
    return qcount;
}
int main(){
    vector<int>nums;
    int tn, ci;
    cout<<"How many numbers do you want to enter?: ";
    cin>>tn;
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<tn;i++){
        cin>>ci;
        nums.push_back(ci);
    }
    int result= q(nums);
    cout<<"Number of elements with an even number of digits: "<<result<<endl;

    return 0;
}