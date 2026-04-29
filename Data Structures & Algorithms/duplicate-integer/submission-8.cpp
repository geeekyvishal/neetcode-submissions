class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])flag=true;
        }
        return flag;

    }
};
