class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        int ans{};
        if (k <= numOnes)
            return k;
        else
        {
            int sum = numOnes + numZeros;
            if (sum >= k)
                return numOnes;
            else
            {
                int sum2 = numOnes + numZeros + numNegOnes;
                if (k == sum2)
                    return numOnes - numNegOnes;
                else
                {
                    int sum3 = k - sum;
                    return numOnes - sum3;
                }
            }
        }
    }
};