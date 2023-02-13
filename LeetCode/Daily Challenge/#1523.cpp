// 1523. Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {
        if(!(low & 1)) {
            low++;
        }
        
        return low > high ? 0 : (high - low) / 2 + 1;
    }
};