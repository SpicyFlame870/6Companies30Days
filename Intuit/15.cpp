#include<bits/stdc++.h>
using namespace std;

bool can(vector<int>& piles, int mid, int h)
{
    int time = 0;
    for(int x: piles)
    {
        time += ceil((long double)x/h);
    }
    return time <= h;
}

int minEatingSpeed(vector<int>& piles, int h)
{
    int res = INT_MAX;
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(can(piles,mid,h))
        {
            res = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return res;
}