class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count{};
        for (int i{}; i < nums.size() - 1; i++)
        {
            for (int j{i + 1}; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
        }
        return count;
    }
};