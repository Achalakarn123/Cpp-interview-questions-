#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int agressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end()); 
    int s=0;
    int ans = -1;
    int maxi = -1;
    for (int i = 0; i <= stalls.size(); i++)
    {
        maxi = maxi + stalls[i];
    }
    int e = maxi;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls,k,mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int>stalls{4,2,3,5,6};
    int k = stalls.size();
    cout<<agressiveCows(stalls,k);
    return 0;
}