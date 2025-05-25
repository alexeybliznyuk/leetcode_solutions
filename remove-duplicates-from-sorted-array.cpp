// https://leetcode.com/problems/remove-duplicates-from-sorted-array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[k]) {
                std::swap(nums[i], nums[k + 1]);
                k++;
            }
        }
        return ++k;
    }
};
