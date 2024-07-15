class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        //std::vector <int> ans_v = {l, r};
        int temp_n = min(height[l],height[r]) * (r - l);
        //std::vector <int> temp_vec {l,r, temp_n};
        while (l < r) {
            if (temp_n < min(height[l],height[r]) * (r - l)) {
                temp_n = min(height[l],height[r]) * (r - l);
            }
            else if (height[l] >= height[r]) {
                r = r - 1;
            }
            else if (height[l] < height[r]) {
                l++;
            }
            
        } 
        return {temp_n};
    }
};
