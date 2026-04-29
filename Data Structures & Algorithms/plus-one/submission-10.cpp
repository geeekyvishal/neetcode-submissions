class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry=0;
        if(digits[n-1]==9)carry=1;
        digits[n-1]=(digits[n-1]+1)%10;

        for (int i = n-2; i >=0; i--)
        {
            int sum=digits[i]+carry;
            if(sum<10)carry=0;
            else carry=sum/10;
            digits[i]=sum%10;
        }
        // cout<<carry<<endl;
        if(carry!=0)digits.insert(digits.begin(),carry);
        return digits;
    }
};
