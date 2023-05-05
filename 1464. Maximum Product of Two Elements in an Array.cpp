class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        int ans = (nums[l - 1] - 1) * (nums[l - 2] - 1);
        return ans;
    }
};