class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //still aint working
        std::unordered_map <string, std::vector<std::string>> hmap;
        for (int i = 0; i != strs.size(); i++) {
            std::string temp_strs = strs[i];
            std::sort(strs[i].begin(), strs[i].end());
            
            int arr[26] = {0};
            for (int l = 0; l != strs[l].size(); l++) {
                //int arr[26] = {0};
                arr[strs[l] - 97]++;


            }
            std::string str_for_hm = "";
            for (int j = 0; j != 26; j++) {
                str_for_hm = str_for_hm + ( (char)strs[j]);
            }
            hmap[str_for_hm].push_back(temp_strs);
        }
        
        for (auto ft : hmap) {
            for (int f = 0; f != hmap[ft].size(); f++) {
                std::cout << hmap[ft[f]];
            }
            std::cout << std::endl;
        }
        
    }
};


