class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector <std::vector <int>>  paired_vector;
        for (int i = 0; i != nums.size() ; i++) {
            paired_vector.push_back({nums[i], i});
        }
        std::sort(nums.begin(), nums.end());

	    int l = 0;
	    int r = nums.size() - 1;
	    while (l<r) {
		    if (nums[l] + nums[r] > target) {
			    r--;
		    }
		    else if (nums[l] + nums[r] < target) {
			    l++;
		    }
		    else if (nums[l] + nums[r] == target) {
			    break;
		    }

	    }
        int new_r = 0;
        int new_l = 0;
        
        for (int k = 0; k != nums.size(); k++) {
            
            if (nums[r] == paired_vector[k][0]) {
                //new_r = k;
                //new_r = paired_vector[k][1];
                new_r = k;
                
            }
            else if (nums[l] == paired_vector[k][0]) {
                //new_l = k;
                //new_l = paired_vector[k][1];
                new_l = k;
            }
            
        }
	    
	return {new_l, new_r};

}
    //}
};
