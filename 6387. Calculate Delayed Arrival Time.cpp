class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        int sum = arrivalTime + delayedTime;
        sum %= 24;
        return sum;
    }
};