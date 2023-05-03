class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        char arr[s.size()];
        string s2;
        for (int i{}; i < s.size(); i++)
        {
            int x = indices[i];
            arr[x] = s[i];
        }
        for (int i{}; i < s.size(); i++)
        {
            s2 += arr[i];
        }
        return s2;
    }
};