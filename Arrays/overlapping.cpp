#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    for(int i = 0; i < n; i++){
        vector<int> x;
        int y,z;
        cin>>y>>z;
        x.push_back(y);
        x.push_back(z);
        intervals.push_back(x);
    }

    vector<vector<int>> merged;
    sort(intervals.begin(), intervals.end());
    auto x = intervals[0];

    for (auto i : intervals)
    {
        if (x[1] >= i[0])
        {
            x[1] = max(x[1], i[1]);
        }
        else
        {
            merged.push_back(x);
            x = i;
        }
    }
    merged.push_back(x);
    for(auto i:merged){
        cout<<i[0]<<" "<<i[1]<<endl;
    }
}