// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int low, mid, high;
        low = 1;
        high = n;
        
        while(low < high )
        {
            mid = (high - low)/2 + low;
            if(isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};