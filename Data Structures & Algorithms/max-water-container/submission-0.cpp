#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxamount = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right)
        {
            int current = (right - left) * min(heights[left], heights[right]);

            maxamount = max(maxamount, current);

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxamount;
    }
};