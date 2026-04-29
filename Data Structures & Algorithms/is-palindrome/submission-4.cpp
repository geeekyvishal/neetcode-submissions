
class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char i : s)
        {
            if(isalnum(i))t+=tolower(i);
        }
        string temp = string(t.rbegin(),t.rend());
        return t==temp;
    }
};