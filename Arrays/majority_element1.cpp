#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        map <int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>(nums.size()/3) ){
                s.insert(nums[i]);
            }
        }
        vector<int> v;
        for(auto i :s){
            v.push_back(i);
        }
        return v;
    }

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    vector<int> v;
    v=majorityElement(nums);
    for(auto i:v){
        cout<<i<<" ";
    }
}