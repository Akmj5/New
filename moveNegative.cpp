#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-1,4,7,-6,-8,-3};
    int n=7;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]>=0 && arr[j]>=0)
        j--;

        else if(arr[i]>=0 && arr[j]<0){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
        i++;
        j--;}

        else if(arr[i]<0)
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}