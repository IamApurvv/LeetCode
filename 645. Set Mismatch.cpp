class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i{1}; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                v.push_back(nums[i]);
                break;
            }
        }
        int sum{n * (n + 1) / 2};
        sum += v[0];
        for (int i{}; i < n; i++)
            sum -= nums[i];
        v.push_back(sum);
        return v;
    }
};