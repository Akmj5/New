#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n , reverseNum = 0,remainder;
    cin>>n;
    while(n!=0){
        remainder = n%10;
        reverseNum = remainder + reverseNum * 10;
        n = n/10;

        

    }
    cout<<endl;
    cout<<reverseNum;

    return 0;
}