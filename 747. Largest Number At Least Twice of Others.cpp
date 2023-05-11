class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int mi = *max_element(nums.begin(), nums.end()), k{};
        for (int i{}; i < nums.size(); i++)
        {
            if (nums[i] == mi)
            {
                k = i;
                continue;
            }
            else
            {
                if (nums[i] * 2 > mi)
                    return -1;
            }
        }
        return k;
    }
};