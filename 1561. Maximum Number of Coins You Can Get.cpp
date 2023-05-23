class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int ans{}, c{int(piles.size() - 2)}, k{};
        sort(piles.begin(), piles.end());
        for (int i{int(piles.size() - 1)}; i >= 0; i--)
        {
            if (k == (piles.size() / 3))
                break;
            if (i == c)
            {
                ans += piles[i];
                c -= 2;
                k++;
            }
        }
        return ans;
    }
};