class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int k = nums.size();
        return nums[k - 1] * nums[k - 2] - nums[0] * nums[1];
    }
};