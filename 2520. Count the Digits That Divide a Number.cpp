class Solution
{
public:
    int countDigits(int num)
    {
        int ans{}, num2{num};
        while (num >= 10)
        {
            int k = num % 10;
            num /= 10;
            if (num2 % k == 0)
                ans++;
        }
        if (num2 % num == 0)
            ans++;
        return ans;
    }
};