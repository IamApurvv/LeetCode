class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int count{};
        if (maxDoubles == 0)
            return target - 1;
        while (target > 1)
        {
            if (maxDoubles == 0)
            {
                count += target - 1;
                return count;
            }
            if (target % 2 == 0 && maxDoubles > 0)
            {
                target /= 2;
                maxDoubles--;
            }
            else
                target--;
            count++;
        }
        return count;
    }
};