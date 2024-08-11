#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int maxi;
            maxi=max(A[0],max(B[0],C[0]));
            int i=0;
            int j=0;
            int k=0;
            
            while(i<n1 && j<n2 && k<n3){
                while(A[i]<maxi){
                    i++;
                }
               
                while(B[j]<maxi){
                    j++;
                }
                
                while(C[k]<maxi){
                    k++;
                }
                
                
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                
                maxi=max(A[i],max(B[j],C[k]));
            }
            return ans;
        }
int main(){
    int A[]={1,5,10,20,40,80};
    int B[]={6,7,20,80,100};
    int C[]={3,4,15,20,30,70,80,120};
    int n1=6;
    int n2=5;
    int n3=8;
    vector<int> ans= commonElements(A,B,C,n1,n2,n3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }


    return 0;
}
