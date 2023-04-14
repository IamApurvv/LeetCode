class Solution
{
public:
    int pivotInteger(int n)
    {
        int ans{}, sum{}, j{};
        for (int i{n}; i >= 1; i--)
        {
            sum += i;
            int value = n - j;
            int value2 = (value) * (value + 1) / 2;
            if (value2 == sum)
                return i;
            j++;
        }
        return -1;
    }
};