class Solution {
public:
    int maxArea(vector<int>& heights) {
        int top_area = 0;

        int l = 0;
        int r = heights.size()-1;

        while (l < r) {
            
            bool is_left_smallest = false;
            if (heights[l] < heights[r]) 
                is_left_smallest = true;

            int width = r-l;
            int height = min(heights[l], heights[r]);

            int area = width * height;
            if (area > top_area) 
                top_area = area;

            if (is_left_smallest) 
                ++l;
            else --r;
        }

        return top_area;

    }
};
