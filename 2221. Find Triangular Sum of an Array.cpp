class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        vector<int> v;
        int ans{};
        if (nums.size() == 1)
            return nums[0];
        for (int i{}; i < nums.size() - 1; i++)
            v.push_back((nums[i] + nums[i + 1]) % 10);
        while (v.size() != 1)
        {
            vector<int> v2;
            for (int i{}; i < v.size() - 1; i++)
                v2.push_back((v[i] + v[i + 1]) % 10);
            v.clear();
            for (int i{}; i < v2.size(); i++)
                v.push_back(v2[i]);
        }
        return v[0];
    }
};

// another approach on the input vector itself

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        while (nums.size() != 1)
        {
            for (int i{}; i < nums.size() - 1; i++)
                nums[i] = ((nums[i] + nums[i + 1]) % 10);
            nums.pop_back();
        }
        return nums[0];
    }
};