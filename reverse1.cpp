#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
    return arr;


}
int main(){

    vector<int> arr {1,2,3,4,5};
    vector<int> rr = reverse(arr);
    for(int i=0;i<rr.size();i++){
        cout<<rr[i]<<" ";
    }
    return 0;
}