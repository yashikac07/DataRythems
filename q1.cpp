#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>> n;
    int reverse= 0;
    int a ;
    int b = n;
    if(n<0||(n%10==0 &&n!=0)){
        cout<<"False";
    }
    else
    {
    while(n!=0)
    {
        a = n%10;
        reverse= reverse*10 + a;
        n= n/10;
    }
    if(b== reverse)
    {cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }
    }
    return 0;

}