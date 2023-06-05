class Solution
{
public:
    int kthFactor(int n, int k)
    {
        vector<int> v;
        for (int i{1}; i <= n / 2; i++)
        {
            if (n % i == 0)
                v.push_back(i);
        }
        v.push_back(n);
        if (v.size() >= k)
            return v[k - 1];
        else
            return -1;
    }
};