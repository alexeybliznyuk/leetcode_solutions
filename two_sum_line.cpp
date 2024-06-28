class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector <int> legacy_nums = nums;

        std::sort(nums.begin(),nums.end() );
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            if (nums[l] + nums[r] > target) {
                r = r - 1;
            }
            else if (nums[l] + nums[r] < target) {
                l++;
            }
            else {
                break;
            }
        }
        int new_l = -1;
        int new_r = -1;

        for (int i = 0; i != nums.size(); i++) {
            if (legacy_nums[i] == nums[l] && new_l == -1) {
                new_l = i;
            }
            else if (legacy_nums[i] == nums[r]) {
                new_r = i;
            }

        }
        return {new_l, new_r};


        






    }
};
