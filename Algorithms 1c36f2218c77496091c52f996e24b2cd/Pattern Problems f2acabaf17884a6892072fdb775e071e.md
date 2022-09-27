# Pattern Problems

Pascals Triangle

Approach:

Inititialised end with 1;

summ with above two elements

catches :- check out of bounds, resize

```cpp
class Solution
{
    public:
        vector<vector < int>> generate(int n)
        {
            vector<vector < int>> x;
            x.resize(n);
            for (int i = 0; i < n; i++)
            {
                x[i].resize(i+1);
                x[i][0] = 1;
                x[i][i]=1;
                for (int j = 1; j < i; j++)
                {   if (i>0)
                    x[i][j]=x[i - 1][j-1] + x[i - 1][j];
                }
            }
            return x;
        }
};
```