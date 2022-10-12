class Solution
{
    public:
        void util(vector<vector < int>> &finalans, vector< int > &candidates, int target, int ind, vector< int > &ans, int sum)
        {
            if (ind == candidates.size())
            {
                if (sum == target)
                    finalans.push_back(ans);
                return;
            }
            if (sum <= target)
            {
                sum += candidates[ind];
                ans.push_back(candidates[ind]);
                util(finalans, candidates, target, ind, ans, sum);
                ans.pop_back();

                sum -= candidates[ind];
            }

            util(finalans, candidates, target, ind + 1, ans, sum);
        }

    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<vector < int>> finalans;
        vector<int> ans;
        util(finalans, candidates, target, 0, ans, 0);
        return finalans;
    }
};