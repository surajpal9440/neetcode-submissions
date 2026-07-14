class Solution {
public:
    bool check(vector<int>& nums, int k, int maxSum) {
        int count = 1, sum = 0;

        for (int num : nums) {
            if (sum + num > maxSum) {
                count++;
                sum = num;
            } else {
                sum += num;
            }
        }
        return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = (low + high) / 2;

            if (check(nums, k, mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};