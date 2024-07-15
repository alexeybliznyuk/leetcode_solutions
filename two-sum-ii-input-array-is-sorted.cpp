class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;


        while (l <= r) {
            if (numbers[l] + numbers[r] > target ) {
                r-=1;
            }
            else if (numbers[l] + numbers[r] < target) {
                l+=1;
            }
            else {
                return {l+1, r+1};
            }
        }
    return {l, r};
    }
};


//i put the code from diff problem lmao

/*
class Solution {
public:
    bool isPalindrome(string s) {
        std::string clear_str = "";
        //for (int i = 0; i != s.size(); i++) {
        int i = 0;
        int l = s.size();
        while (i != s.size()) {

            if (std::isdigit(s[i])) {
                clear_str+=s[i];
            }
            else if (std::isalpha(s[i])) {
                clear_str += std::tolower(s[i]);
            
            }
            i++;
        }
        std::string clear_str2 = "";
        while (l != -1) {

            if (std::isdigit(s[l])) {
                clear_str2+=s[l];
            }
            else if (std::isalpha(s[l])) {
                clear_str2 += std::tolower(s[l]);
            }




            l-=1; 
            
        }
        //std::cout << clear_str << "    " << clear_str2;
    std::cout << clear_str << "    " << clear_str2;
    if (clear_str != clear_str2) {
        return false;
    }
    return true;
    }
};
*/
