class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector <int> c_nums = nums;
        std::sort(c_nums.begin(),c_nums.end());



        int temp_n = 0;
        std::vector <std::vector <int>> ans_v;


        for (int i = 0; i != c_nums.size(); i++) {
            //temp_n = c_nums[i];
            if (i>0 && c_nums[i] == c_nums[i - 1]) {
            //    i++;
                continue;                
            }
            int l = i + 1;
            int r = c_nums.size() - 1;
            while (l<r) {  
                /*
                if (l == i) {
                    l++;
                } 
                if (r == i) {
                    r = r -1;
                }
                

                if (l > 0 && c_nums[l] == c_nums[l - 1]) {
                    l++;
                    continue;
                }

                if (r < c_nums.size() - 1 && c_nums[r] == c_nums[r + 1]) {
                    r = r - 1;
                    continue;
                }
                */

                if (c_nums[i] + c_nums[l] + c_nums[r] > 0) {
                    r-=1;
                }
                else if (c_nums[i] + c_nums[l] + c_nums[r] < 0) {
                    l++;
                }
                
                else if (c_nums[i] + c_nums[l] + c_nums[r] == 0) {
                    ans_v.push_back({c_nums[i],c_nums[l],c_nums[r]});
                    l++;
                    //break;
                    while (l< r && c_nums[l] == c_nums[l - 1]) {
                        l++;
                    }
                }

                /*
                if (l > 0 && c_nums[l] == c_nums[l - 1]) {
                    l++;
                    continue;
                }

                else if (r < c_nums.size() - 1 && c_nums[r] == c_nums[r + 1]){
                    r = r - 1;
                    continue;
                }
                */

            }
        }
        //for (int i = 0; i != ans_v.size(); i++) {
            
        //}
        
    //return {{3}};
    return ans_v;
    }
};
