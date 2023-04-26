class Solution
{
public:
    int totalMoney(int n)
    {
        int k = 1, sum{}, pre{1};
        for (int i{1}; i <= n; i++)
        {
            if (i % 7 == 1 && i / 7 >= 1)
            {
                k = pre + 1;
                pre = k;
            }
            sum += k;
            k++;
        }
        return sum;
    }
};