class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        for (int i{}; i <= sqrt(c); i++)
        {
            int k = sqrt(c - i * i);
            if (k * k + i * i == c)
                return true;
        }
        return false;
    }
};