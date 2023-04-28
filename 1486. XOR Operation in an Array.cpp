class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int a[n];
        for (int i{}; i < n; i++)
            a[i] = start + 2 * i;
        int xo = a[0];
        for (int i{1}; i < n; i++)
        {
            xo ^= a[i];
        }
        return xo;
    }
};