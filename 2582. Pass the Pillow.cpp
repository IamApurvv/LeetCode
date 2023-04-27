class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int value{n - 1};
        if (time > value)
        {
            int q = time / value;
            int r = time % value;
            if (q % 2 == 0)
                return r + 1;
            else
                return n - r;
        }
        else
            return time + 1;
    }
};