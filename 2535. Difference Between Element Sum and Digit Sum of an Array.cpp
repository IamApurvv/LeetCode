class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int esum{}, dsum{};
        for (int i{}; i < nums.size(); i++)
            esum += nums[i];
        for (int i{}; i < nums.size(); i++)
        {
            if (nums[i] < 10)
                dsum += nums[i];
            else
            {
                while (nums[i] >= 10)
                {
                    int k = nums[i] % 10;
                    nums[i] /= 10;
                    dsum += k;
                }
                dsum += nums[i];
            }
        }
        return abs(dsum - esum);
    }
};