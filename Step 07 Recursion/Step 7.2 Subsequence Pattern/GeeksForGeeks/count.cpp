#include <bits/stdc++.h>
using namespace std;
void solve(int index,vector<int> ans,int count,int arr[], int n){
        if(index==n){
            count++;
            return;
        }
        ans.push_back(arr[index]);
        
        solve(index+1,ans,count,arr,n);
       
        ans.pop_back();
        solve(index+1,ans,count,arr,n);

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int sum=7;
    vector<int> ans;
    int index=0;
    int count=0;
    solve(index,ans,count,arr,n);
    return 0;
}