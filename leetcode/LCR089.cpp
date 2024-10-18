#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int> nums = {5, 2, 3, 1};
    int sum[110] = {0};
    int i = 3;
    if (nums.size() < 1)
        return 0;
    else if (nums.size() == 1)
        return nums[0];
    else if (nums.size() == 2)
        return max(nums[0], nums[1]);
    sum[0] = nums[0];
    sum[1] = nums[1];
    sum[2] = nums[0] + nums[2];
    for (i = 3; i < nums.size(); i++)
        sum[i] = max(sum[i - 2], sum[i - 3]) + nums[i];
    i--;
    int ans = max(sum[i], sum[i - 1]);
    cout << ans;
    return 0;
}