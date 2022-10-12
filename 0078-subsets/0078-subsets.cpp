class Solution
{
    public:
        void print(vector<vector < int>> &finalans, vector< int > &nums, int ind, vector< int > &ans)
        {
            if (ind >= nums.size())
            {

                finalans.push_back(ans);
                return;
            }
            ans.push_back(nums[ind]);
            print(finalans, nums, ind + 1, ans);
            ans.pop_back();
            print(finalans, nums, ind + 1, ans);
        }
    vector<vector < int>> subsets(vector<int> &nums)
    {
        vector<vector < int>> finalans;
        vector<int> ans;
        print(finalans, nums, 0, ans);
        return finalans;
    }
};