class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        bool k{false};
        for (int i{}; i < arr.size(); i++)
        {
            int x = arr[i];
            for (int j{}; j < arr.size(); j++)
            {
                if (i == j)
                    continue;
                if ((2 * arr[j]) == x)
                    k = true;
            }
            if (k)
                break;
        }
        return k;
    }
};