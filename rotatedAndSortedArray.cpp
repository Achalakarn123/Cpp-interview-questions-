#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> &nums)
{
    int flag = 0;
    int k = nums.size();
    for (int i = 1; i < k; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            flag++;
        }
    }
    if (nums[k - 1] > nums[0])
    {
        flag++;
    }
    return (flag <= 1);
}
int main()
{
    vector<int> nums = {1, 1, 1};
    if(check(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
