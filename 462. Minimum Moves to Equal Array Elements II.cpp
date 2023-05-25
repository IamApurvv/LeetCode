class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int k{};
        if (nums.size() % 2 != 0)
        {
            int sum{};
            k = (nums.size() - 1) / 2;
            for (int i{}; i < nums.size(); i++)
                sum += abs(nums[k] - nums[i]);
            return sum;
        }
        else
        {
            int sum{}, sum2{};
            k = nums.size() / 2;
            int k2 = k - 1;
            for (int i{}; i < nums.size(); i++)
            {
                sum += abs(nums[k] - nums[i]);
                sum2 += abs(nums[k2] - nums[i]);
            }
            return min(sum, sum2);
        }
    }
};