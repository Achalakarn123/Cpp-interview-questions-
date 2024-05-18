#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool isPossible(vector<int> &stalls,int mid,int k)
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
    int ans = -1;
   int maxi=-1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
     int s = 0;
    
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if(isPossible(stalls,mid,k))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        return ans;
    }
}
int main()
{
    vector<int> stalls{1, 2, 4, 5, 6};
    int k;
    k = stalls.size();
    cout << agressiveCows(stalls, k);
    return 0;
}
