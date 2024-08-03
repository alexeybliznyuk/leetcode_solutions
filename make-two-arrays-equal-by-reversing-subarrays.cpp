class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map <int, int> hmap;

        for (int i = 0; i != arr.size(); i++) {
            hmap[arr[i]]++;
        }

        for (int i = 0; i != target.size(); i++) {
            
            if (hmap[target[i]] == 0) {
                return false;
            }
            else  {
                hmap[target[i]]--;
            }
        }
        return true;


    }
};
