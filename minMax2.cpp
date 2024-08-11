#include<iostream>
#include<algorithm>
using namespace std;
struct Pair{
    int mini;
    int maxi;

};
Pair minMax2(int arr[],int n){
    Pair minmax;
    sort(arr,arr+n);
    minmax.mini=arr[0];
    minmax.maxi=arr[n-1];
    return minmax;
}
int main(){
    int arr[]={1};
    int n = 1;
    Pair ob = minMax2(arr,n);
    cout<<"max is "<<ob.maxi<<endl;
    cout<<"min is "<<ob.mini;
    return 0;
}