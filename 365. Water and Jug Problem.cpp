class Solution
{
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity)
    {
        int sum = jug1Capacity + jug2Capacity;
        int g = __gcd(jug1Capacity, jug2Capacity);
        if (targetCapacity == sum || targetCapacity == jug1Capacity || targetCapacity == jug2Capacity)
            return true;
        if (sum < targetCapacity)
            return false;
        return targetCapacity % g == 0;
    }
};

// based on concept of ax+by=m