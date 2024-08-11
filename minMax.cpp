#include<iostream>

using namespace std;
struct Pair{
    int mini;
    int maxi;
};

Pair minMax(int arr[],int n){
    Pair minmax;
    
    if(n==0){
        minmax.maxi=arr[0];
        minmax.mini=arr[0];
        return minmax;

    }

    minmax.mini=min(arr[0],arr[1]);
    minmax.maxi=max(arr[0],arr[1]);

    for(int i=2;i<n;i++){
        minmax.mini=min(arr[i],minmax.mini);
        minmax.maxi=max(arr[i],minmax.maxi);

    }
    return minmax;


}
int main(){
    int arr[]={1};
    int n = 1;
    Pair mima = minMax(arr,n);
    cout<<"max is "<<mima.maxi<<endl;
    cout<<"min is "<<mima.mini;

    return 0;
}
