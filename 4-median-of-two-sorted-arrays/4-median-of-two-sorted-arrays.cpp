class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
 
    vector<int> merged;
        int s=  nums1.size() +  nums2.size();
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            merged.push_back(nums1[i]);
            i++;
        }
        else {
            merged.push_back(nums2[j]);
            j++;
        }
    }
    while (i < nums1.size() ) {
         merged.push_back(nums1[i]);
        i++;
    }
 
    while (j < nums2.size()) {
  merged.push_back(nums2[j]);
        j++;
    }
                
    float ans;
        if ((s % 2) != 0) 
            ans=  merged[merged.size()/2] ;
         else ans= (float)  (merged[merged.size()/2] +  merged[merged.size()/2-1])/2;
        return ans;
        
        
    }
};