class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> v;
        vector<pair<int, string>> p;
        for (int i{}; i < names.size(); i++)
            p.push_back({heights[i], names[i]});
        sort(p.begin(), p.end(), greater<pair<int, string>>());
        for (int i{}; i < p.size(); i++)
            v.push_back(p[i].second);
        return v;
    }
};