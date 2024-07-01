class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> Hmap;

    //std::string s, t;

    // is worst solution (least 10 percent)

    //s = "anagram";
      
    //t = "nagaram";
    //s = "rat";
    //t = "car";


    int dif_let = 0;


    for (int i = 0; i != s.size(); i++) {
        if (Hmap.find(s[i]) == Hmap.end()) {
            Hmap[s[i]] = 1;
        }

        else {
            Hmap[s[i]] += 1;
            //dif_let++;
        }
        dif_let++;
    }
    
    
    //for (int l = 0; l != s.size(); l++) {
    //    std::cout << Hmap[s[l]];
    //}
    
    //std::cout << std::endl << dif_let << std::endl;
    for (int i = 0; i != t.size(); i++) {
        if (Hmap.find(t[i]) == Hmap.end() || Hmap[t[i]] == 0) {
            //Hmap[s[i]] = 1;
            dif_let = -1;
            break;
        }

        else {
            Hmap[t[i]] -= 1;
            dif_let-= 1;
        }

    }
    //for (int l = 0; l != s.size(); l++) {
    //    std::cout << Hmap[s[l]];
    //}
    bool res = true;
    //if (dif_let == 0) {
        
    //    res = true;
    //}
    if (dif_let == -1 || t.size() != s.size()) {
        res = false;
    }

    //std::cout << std::endl;
    //std::cout << Hmap.size();
    //std::cout << Hmap[1];
    //std::cout << dif_let;
    return res;

    }
};
