/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

bool operator<(const Interval& a, const Interval& b) {
    return a.start < b.start; 
}

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        bool ans=true;
        for (int i = 1; i < n; i++)
        {
            if(intervals[i].start < intervals[i-1].end)ans=false;
        }
        return ans;  
    }
};



