class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v;
        for (int i{}; i < nums.size(); i++)
        {
            int count{};
            for (int j{}; j < nums.size(); j++)
            {
                if (nums[j] < nums[i])
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};