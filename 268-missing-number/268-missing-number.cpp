class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=nums[0]^0;
        for (int i=1;i<nums.size();i++)
            ans^=nums[i]^i;
        
        return ans^nums.size();
            
        
    }
};