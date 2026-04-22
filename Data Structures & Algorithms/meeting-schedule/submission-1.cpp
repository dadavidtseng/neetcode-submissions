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

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        for(int i = 0; i < (int)intervals.size(); i++)
        {
            for(int j = i+1; j < (int)intervals.size(); j++)
            {
                if(min(intervals[i].end, intervals[j].end) > max(intervals[i].start,intervals[j].start))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
