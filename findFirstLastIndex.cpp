#include <iostream>
using namespace std;
int findFirstLastIndex(int nums[], int n, int key, int ans[])
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == key)
        {
            ans[0] = mid;
            end = mid - 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - mid) / 2;
    }

    start = 0;
    end = n - 1;
    mid = start + (end - start) / 2;
    while (start <= end) 
    {
        if (nums[mid] == key)
        {
            ans[1] = mid;
            start = mid + 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - mid) / 2;
    }
    return ans;
}
int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 8, 8, 8, 10};
    int ans[] = {-1, -1};
    int key = 8;
    int size = sizeof(nums) / sizeof(nums[0]);
    findFirstLastIndex(nums, size, key, ans);
    int length = sizeof(ans) / sizeof(ans[0]);
    for (int i = 0; i < length; i++)
    {
        cout << ans[i];
        cout << "\t";
    }
    return 0;
}