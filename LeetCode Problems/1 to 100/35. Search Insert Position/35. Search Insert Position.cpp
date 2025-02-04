class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f = -1, l = nums.size();
        while (l > f + 1) {
            int m = (l + f) / 2;
            if (nums[m] == target)
                return m;
            else if (nums[m] < target)
                f = m;
            else 
                l = m;
        }
        return l;
    }
};
