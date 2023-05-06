class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> v, v2;
        for (int i{}; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                v.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        for (int i{}; i < v2.size(); i++)
            v.push_back(v2[i]);
        return v;
    }
};