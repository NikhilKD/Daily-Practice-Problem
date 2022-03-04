#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
        int count=1;
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]==ans){
                count++;
            }else{
                count--;
            }
            if(count==0){
                ans=arr[i];
                count=1;
            }
        }
        return ans;
    }

int main(){
    int n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<majorityElement(arr);
}