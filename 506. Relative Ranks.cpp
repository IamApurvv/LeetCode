class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> s;
        vector<int> k;
        k = score;
        sort(k.begin(), k.end(), greater<int>());
        for (int i{}; i < score.size(); i++)
        {
            int x = score[i];
            for (int j{}; j < k.size(); j++)
            {
                if (x == k[j])
                {
                    if (x == k[0])
                        s.push_back("Gold Medal");
                    else if (x == k[1])
                        s.push_back("Silver Medal");
                    else if (x == k[2])
                        s.push_back("Bronze Medal");
                    else
                        s.push_back(to_string(j + 1));
                }
            }
        }
        return s;
    }
};