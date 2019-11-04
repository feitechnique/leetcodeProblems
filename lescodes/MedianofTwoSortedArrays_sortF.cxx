class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty() && nums2.empty())
            return 0.0;
        vector<int> totalnums;
        double median1;
        totalnums.insert(totalnums.end(), nums1.begin(), nums1.end());
        totalnums.insert(totalnums.end(), nums2.begin(), nums2.end());
        sort(totalnums.begin(),totalnums.end());//complexity
        if (totalnums.size()%2 == 0)
            median1 = ((double)totalnums[totalnums.size()/2] + (double)totalnums[totalnums.size()/2-1])/2;
        else
            median1 = (double)totalnums[(totalnums.size()+1)/2 - 1];
        
        return median1;
        
    }
};
