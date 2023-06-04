class Solution
{
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2)
    {
        long long ans{}, c{}, c2{};
        if (cost1 < cost2)
        {
            c = cost2;
            c2 = cost1;
        }
        else
        {
            c = cost1;
            c2 = cost2;
        }
        int count = total / c;
        while (count != -1)
        {
            int rem = total - count * c;
            if (rem / c2)
                ans += (rem / c2) + 1;
            else
                ans++;
            count--;
        }
        return ans;
    }
};