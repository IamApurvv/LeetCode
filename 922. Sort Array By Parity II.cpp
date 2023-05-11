class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> ans, a, b;
        int one{}, two{};
        for (int i{}; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }
        for (int i{}; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(a[one]);
                one++;
            }
            else
            {
                ans.push_back(b[two]);
                two++;
            }
        }
        return ans;
    }
};

// In just a single vector rather than dividing original one into two

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {

        vector<int> ans(nums.size());
        int e = 0, o = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans[e] = nums[i];
                e += 2;
            }
            else if (nums[i] % 2 != 0)

            {
                ans[o] = nums[i];
                o += 2;
            }
        }
        return ans;
    }
};