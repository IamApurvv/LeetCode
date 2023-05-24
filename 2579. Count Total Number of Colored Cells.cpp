class Solution
{
public:
    long long coloredCells(int n)
    {
        if (n == 1)
            return 1;
        else
        {
            long long sum{1}, k{4};
            for (int i{}; i < n - 1; i++)
            {
                sum += k;
                k += 4;
            }
            return sum;
        }
    }
};