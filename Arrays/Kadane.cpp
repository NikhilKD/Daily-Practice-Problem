#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool pos=false;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos=true;
            break;
        }
    }
    if(pos){
    int cur=0;
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        if(cur+arr[i]<0){
            cur=0;
        }else{
            cur+=arr[i];
        }
        cout<<cur<<endl;
        sum=max(cur,sum);
    }
    cout<<sum<<endl;
    }else{
        cout<<*max_element(arr, arr + n)<<endl;
    }

    return 0;
}