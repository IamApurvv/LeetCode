class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int count{};
        for (int i{}; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                return 0;
            if (nums[i] < 0)
                count++;
        }
        if (count % 2 == 0)
            return 1;
        else
            return -1;
    }
};