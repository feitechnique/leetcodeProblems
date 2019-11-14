class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length -  i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp;
                    temp = nums[j + 1];
                    nums[j + 1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};
