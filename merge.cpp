#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(int arr1[],int arr2[],int n,int m){
    vector<int> ans(n+m);
    int i=0;
    int j=0;
    int index;
    for( index=0;index<ans.size();index++){
        
        if(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[index]=arr1[i];
            i++;
        }
        else{
            ans[index]=arr2[j];
            j++;

        }
        }else{
            break;
        }
        
    }
    
        while(i<n){
            ans[index]=arr1[i];
            i++;
            index++;

        }
        while(j<m){
            ans[index]=arr2[j];
            j++;
            index++;
            
        }
        return ans;

       

}
int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    int n=4;
    int m=5;
    vector<int> ans = merge(arr1,arr2,n,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}