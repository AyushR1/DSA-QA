class Solution
{
    public:
        bool lemonadeChange(vector<int> &bills)
        {
            vector<int> b(3, 0);
            for (int i = 0; i < bills.size(); i++)
            {
                if (bills[i] == 5)
                    b[0]++;
                else if (bills[i] == 10)
                {
                    if (b[0] > 0)
                    {
                        b[0]--;
                        b[1]++;
                    }
                    else return false;

                }
                else if (bills[i] == 20)
                {
                    if (b[1] > 0 && b[0] > 0)
                    {
                        b[1]--;
                        b[0]--;
                        b[2]++;
                    }
                    else if (b[0] > 2)
                    {
                        b[0] -= 3;
                    }
                    else return false;
                }
            }
            return true;
        }
};