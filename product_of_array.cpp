class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int whole_timed = 1;
	int ammount_of_zeros = 0;
	int except_zero = 1;
	for (int i = 0; i != nums.size(); i++) {
		whole_timed *= nums[i];
		if (nums[i] == 0) {
			ammount_of_zeros++;

		}
	}
	if (ammount_of_zeros == 1) {
		for (int t = 0; t != nums.size(); t++) {
			if (nums[t] != 0)
				except_zero *= nums[t];
		}
	}

	for (int j = 0; j != nums.size(); j++) {
		if (!(nums[j] == 0)) {
			nums[j] = whole_timed / nums[j];
		}
		else if (ammount_of_zeros > 1) {
			nums[j] = 0;
		}
		else if (ammount_of_zeros == 1) {
			nums[j] = except_zero;
		}
	}

	std::cout << whole_timed;
	return nums;
    }
};
