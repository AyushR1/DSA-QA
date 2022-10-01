class Solution
{
    public:
        void moveZeroes(vector<int> &nums)
        {  int nonzerolist=0;
            int j = nums.size();
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    swap(nums[i],nums[nonzerolist]);
                        nonzerolist++;
                }
                    
            }
        }
};