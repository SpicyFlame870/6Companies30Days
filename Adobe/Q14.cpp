#include<bits/stdc++.h>
using namespace std;

pair<int, int> findSmallestRange(int arr[][10000], int n, int k) {
    pair<int, int> range = { -1e9, 1e9};
    int ans = 1e9;
    vector<int> ptr(k, 1);
    set<array<int, 2>> s;
    for (int i = 0; i < k; i++)s.insert({arr[i][0], i});
    while (1) {
        auto x = *s.begin(), y = *s.rbegin();
        if (ans > y[0] - x[0])ans = y[0] - x[0], range = {x[0], y[0]};
        else if (ans == y[0] - x[0])range = min(range, {x[0], y[0]});
        if (ptr[x[1]] == n)break;
        s.erase(s.find(x));
        s.insert({arr[x[1]][ptr[x[1]]], x[1]});
        ptr[x[1]]++;
    }
    return range;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n][n];
    pair<int,int> rangee;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    rangee = findSmallestRange(arr,n,k);
    cout<<rangee.first<<" "<<rangee.second;
}