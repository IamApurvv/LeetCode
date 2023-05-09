class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int sum{};
        for (int i{}; i < seats.size(); i++)
        {
            sum += abs(students[i] - seats[i]);
        }
        return sum;
    }
};