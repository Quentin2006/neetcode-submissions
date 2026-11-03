class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        int l = 0;
        int r = nums.size()-1;

        while (l <= r) {
            int index = l + (r-l)/2;
            // if its less we cut off left side 
            if (nums[index] > target) 
                r = index-1;
            
            else if (nums[index] < target)
                l = index+1;

            else
                return index;
        }

        return -1;

    }
};
