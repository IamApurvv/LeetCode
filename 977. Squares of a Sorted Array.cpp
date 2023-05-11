class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i{}; i < nums.size(); i++)
        {
            nums[i] = (nums[i] * nums[i]);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};