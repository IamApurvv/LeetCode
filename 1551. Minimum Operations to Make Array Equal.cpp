class Solution
{
public:
    int minOperations(int n)
    {
        int arr[n], sum{};
        for (int i{}; i < n; i++)
            arr[i] = (2 * i) + 1;
        if (n % 2 != 0)
        {
            for (int i{}; i < (n - 1) / 2; i++)
                sum += abs(arr[i] - arr[n - i - 1]);
        }
        else
        {
            for (int i{}; i < n / 2; i++)
                sum += abs(arr[i] - arr[n - i - 1]);
        }
        return sum / 2;
    }
};