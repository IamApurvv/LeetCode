class Solution
{
public:
    int isWinner(vector<int> &player1, vector<int> &player2)
    {
        int sum1{}, sum2{};
        for (int i{}; i < player1.size(); i++)
        {
            if (i == 1)
            {

                if (player1[i - 1] == 10)
                    sum1 += (2 * player1[i]);
                else
                    sum1 += player1[i];
            }
            else if (i >= 2)
            {
                if (player1[i - 1] == 10 || player1[i - 2] == 10)
                    sum1 += (2 * player1[i]);
                else
                    sum1 += player1[i];
            }
            else
                sum1 += player1[i];
        }
        for (int i{}; i < player2.size(); i++)
        {
            if (i == 1)
            {

                if (player2[i - 1] == 10)
                    sum2 += (2 * player2[i]);
                else
                    sum2 += player2[i];
            }
            else if (i >= 2)
            {
                if (player2[i - 1] == 10 || player2[i - 2] == 10)
                    sum2 += (2 * player2[i]);
                else
                    sum2 += player2[i];
            }
            else
                sum2 += player2[i];
        }
        if (sum1 == sum2)
            return 0;
        else if (sum1 > sum2)
            return 1;
        else
            return 2;
    }
};