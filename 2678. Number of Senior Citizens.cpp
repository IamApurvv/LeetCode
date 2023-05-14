class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int count{};
        for (int i{}; i < details.size(); i++)
        {
            string k = details[i];
            if (k[11] == '6')
            {
                if (k[12] != '0')
                    count++;
            }
            else if (k[11] == '7' || k[11] == '8' || k[11] == '9')
                count++;
        }
        return count;
    }
};