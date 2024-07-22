class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxx = 1;
        //int re_k = k;
        std::unordered_map <char,int> hmap;
        int maxx_atm = 1;

        while (r < s.size()) {
            //maxx_atm = 1;



            //hmap[s[r]]++;
            //maxx = max(maxx, hmap[s[r]]);
            /*
            maxx = max(maxx, maxx_atm);
            for (auto i : hmap) {
                std::cout << i.second << "\t" << maxx_atm << std::endl;
                if (i.second > maxx_atm) {
                    //std::cout << i.second;
                    maxx_atm = i.second;
                }
            }
            */

            if (maxx_atm + k >= r - l + 1) {
                hmap[s[r]]++;
                
                r++;
            }
            else if (maxx_atm + k < r - l + 1) {
                hmap[s[l]] = hmap[s[l]] - 1;
                l++;
            }
            

            //maxx = max(maxx, maxx_atm);
            for (auto i : hmap) {
                //std::cout << i.second << "\t" << maxx_atm << std::endl;
                if (i.second > maxx_atm) {
                    //std::cout << i.second;
                    maxx_atm = i.second;
                }
            }
            maxx = max(maxx, maxx_atm);
        }
    return maxx + k;
    }
};
