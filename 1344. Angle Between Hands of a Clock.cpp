class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double count{}, count2{}, ans{};
        count += double(minutes) / 2;
        if (hour != 12)
            count += 30 * hour;
        count2 += minutes * 6;
        ans += abs(count - count2);
        return min(ans, double(360 - ans));
    }
};