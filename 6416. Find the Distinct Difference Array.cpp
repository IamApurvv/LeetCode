class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        int count{};
        vector<int> v;
        for (int i{}; i < nums.size(); i++)
        {

            set<int> s1, s2;
            for (int j{}; j <= i; j++)
            {
                s1.insert(nums[j]);
            }
            for (int j{i + 1}; j < nums.size(); j++)
            {
                s2.insert(nums[j]);
            }
            int si = s1.size() - s2.size();
            v.push_back(si);
        }
        return v;
    }
};