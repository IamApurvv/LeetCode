class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        bool k = false;
        for (int i{}; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1])
                k = true;
        }
        if (k || x < 0)
            return false;
        else
            return true;
    }
};