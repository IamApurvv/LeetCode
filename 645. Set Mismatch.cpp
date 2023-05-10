class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i{1}; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                v.push_back(nums[i]);
                break;
            }
        }
        int sum{n * (n + 1) / 2};
        sum += v[0];
        for (int i{}; i < n; i++)
            sum -= nums[i];
        v.push_back(sum);
        return v;
    }
};

// Using Hashmap

class Solution
{
public:
    vector<int> v;
    unordered_map<int, int> m;
    vector<int> findErrorNums(vector<int> &a)
    {
        sort(a.begin(), a.end());
        for (int p = 1; p <= a.size(); p++)
            m[p] = 0;
        for (auto &p : a)
            m[p]++;
        for (auto &p : m)
        {
            if (p.second == 2)
            {
                v.push_back(p.first);
                break;
            }
        }
        for (auto &p : m)
        {
            if (p.second == 0)
            {
                v.push_back(p.first);
                break;
            }
        }

        return v;
    }
};