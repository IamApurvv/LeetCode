class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> check;
        check = heights;
        int count{};
        sort(check.begin(), check.end());
        for (int i{}; i < check.size(); i++)
        {
            if (check[i] != heights[i])
                count++;
        }
        return count;
    }
};