class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;          // stores indices
        vector<int> ans;

        for (int r = 0; r < nums.size(); r++) {

            // remove smaller elements from back
            while (!dq.empty() && nums[dq.back()] < nums[r]) {
                dq.pop_back();
            }
            dq.push_back(r);

            // remove elements out of window
            if (dq.front() <= r - k) {
                dq.pop_front();
            }

            // when window size becomes k
            if (r >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};
