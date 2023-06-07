class Solution
{
public:
    int twoEggDrop(int n)
    {
        int k{1}, count{};
        while (n > 0)
        {
            n -= k;
            k++;
            count++;
        }
        return count;
    }
};