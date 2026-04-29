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

bool cmp(Interval &i1, Interval &i2){
    if(i1.start==i2.start)return i1.end<i2.end;
    else i1.start<i2.start;
}

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);

        for(int i=1;i<intervals.size();i++){
            int startCur=intervals[i].start;
            int endPrev=intervals[i-1].end;
            if(startCur<endPrev)return false;
        }
        return true;
    }
};
