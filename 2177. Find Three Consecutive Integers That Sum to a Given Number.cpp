class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {
        long long sum{}, k{};
        k = num / 3;
        sum += 3 * k;
        vector<long long> v;
        if (sum == num)
        {
            v.push_back(k);
            v.push_back(k + 1);
            v.push_back(k - 1);
        }
        sort(v.begin(), v.end());
        return v;
    }
};