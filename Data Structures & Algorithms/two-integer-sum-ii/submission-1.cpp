class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*
        O(N^2) TIME
        O(1) SPACE 

        for (int i = 0; i < numbers.size(); ++i) {
            int find = target - numbers[i];
            for (int j = 0; j < numbers.size(); ++j) {
                if (i != j) {
                    if (numbers[j] == find) {
                        if (i > j) return {j+1,i+1};
                        return {i+1,j+1};
                    }
                }
            }
        }
        */

        // have two pointers, one on left
        // other on right
        // if find val > target move right poiner
        // if < move left pointer

        int l = 0;
        int r = numbers.size()-1;
        while (l < r) {
            if (numbers[l] + numbers[r] > target) 
                --r;
            else if (numbers[l] + numbers[r] < target)
                ++l;
            else return {l+1,r+1};
        }

        return {-1, -1};


    }
};
