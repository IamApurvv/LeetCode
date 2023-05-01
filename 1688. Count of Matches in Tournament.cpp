class Solution
{
public:
    int numberOfMatches(int n)
    {
        int count{};
        if (n == 1)
            return 0;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                count += (n / 2);
                n /= 2;
            }
            else
            {
                count += ((n - 1) / 2);
                n = (n + 1) / 2;
            }
        }
        return count;
    }
};