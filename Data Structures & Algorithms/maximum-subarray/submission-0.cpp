class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //brute force way
        int n=nums.size();
        int maxsum=INT_MIN;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=0;
            for (int j = i; j < n; j++)
            {
                sum+=nums[j];
                maxsum=max(maxsum,sum);
            } 
        }
        return maxsum;
    }
};
