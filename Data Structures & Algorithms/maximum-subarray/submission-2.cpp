class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algo
        int cursum=0;
        int maxsum=nums[0];
        for(int i : nums)
        {
            cursum=max(cursum,0);
            cursum+=i;
            maxsum=max(cursum,maxsum);
        }
        return maxsum;
    }
};
