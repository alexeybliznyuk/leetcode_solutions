class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;   
        int r = 1000000000;
        int final_speed = r;
        while (l <= r) {
            int speed = ((l + r) / 2);
            int h_count = h;
            for (int i = 0; i != piles.size(); i++) {
                h_count -= (piles[i] / speed +  (piles[i] % speed != 0)); 
            }
            if (h_count >= 0) { 
                r = speed - 1;
                final_speed = min(final_speed, speed);           
            }
            else if (h_count < 0) {
                l = speed + 1;
            }
        }
        return final_speed;
    }
};
