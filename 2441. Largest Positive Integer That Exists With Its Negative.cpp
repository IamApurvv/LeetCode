class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int ans{-1};
        int l = nums.size();
        sort(nums.begin(), nums.end());
        for (int i{}; i < l - 1; i++)
        {
            if (nums[i] < 0)
            {
                for (int j{i + 1}; j < l; j++)
                {
                    if (abs(nums[i]) == nums[j])
                        ans = max(ans, nums[j]);
                }
            }
        }
        return ans;
    }
};

// another approach in short