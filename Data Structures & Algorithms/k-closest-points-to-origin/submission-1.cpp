class Solution {
    public:
    bool operator()(const pair<double, vector<int>> a, const pair<double, vector<int>> b) {
        return a.first > b.first;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        // have min-heap
        // min heap holding distance and index of point
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, Solution> min_heap;

        // iterate thoguh every point
        for (vector<int> point : points) {
            // calculate distance at point i
            double distance = sqrt(pow(point[0], 2) + pow(point[1], 2));
            // push to min-heap
            pair<double, vector<int>> add;
            add.first = distance;
            add.second = point;
            min_heap.push(add);
        }

        vector<vector<int>> res;
        // push top k elements to res vector
        for (int i = 0; i < k; ++i) {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }


        return res;
    }
};
