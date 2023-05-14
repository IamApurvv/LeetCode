class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        set<float> s;
        sort(nums.begin(), nums.end());
        int k = nums.size();
        while (k >= 2)
        {
            float a = nums[0];
            float b = nums[nums.size() - 1];
            float av = (a + b) / 2;
            s.insert(av);
            nums.erase(nums.begin() + 0);
            nums.pop_back();
            k -= 2;
        }
        return s.size();
    }
};