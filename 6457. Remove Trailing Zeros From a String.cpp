int k = num.size(), p{};
string s = "";
for (int i{k - 1}; i >= 0; i--)
{
    if (num[i] == '0')
        continue;
    else
    {
        p = i;
        break;
    }
}
for (int i{}; i <= p; i++)
    s += num[i];
return s;