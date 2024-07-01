class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hmap;
        int ifans = 0;

        for (int i = 0; i != nums.size(); i++) {
            if (hmap[nums[i]] != 0) {
                ifans = -1;
                break;
            }
            else {
                hmap[nums[i]]++;
            }
        }


        bool ans = false;
        if (ifans == -1)
            ans = true;


        return ans;



    
    }
};
